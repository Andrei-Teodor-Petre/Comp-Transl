package main

import (
	"bufio"
	"errors"
	"fmt"
	"io"
	"os"
	"unicode"
)

var Operators = []string{"+", "-", "!", "&", "*", "", "^", "<", ">", "=", "&", "|", ":", ".", "/", "%"}
var Keywords = []string{"break", "case", "chan", "const", "continue", "default", "defer", "else", "fallthrough",
	"for", "func", "go", "goto", "if", "import", "interface", "map", "package", "range",
	"return", "select", "struct", "switch", "type", "var"}
var Delimiters = []string{"(", ")", "[", "]", "{", "}", ","}

type Token int

const (
	EOF = iota
	ILLEGAL
	IDENT
	INT
	SEMI // ;
	COMMENT
	BLOCKCOMMENT
	KEYWORD //

	// Infix ops
	OPERATOR //
	DELIMITER

	STRING // "
	RUNE   //'
)

var tokens = []string{
	EOF:          "EOF",
	ILLEGAL:      "ILLEGAL",
	IDENT:        "IDENT",
	INT:          "INT",
	SEMI:         ";",
	COMMENT:      "COMMENT",
	BLOCKCOMMENT: "BLOCK COMMENT",
	KEYWORD:      "KEYWORD",

	OPERATOR:  "OPERATOR",
	DELIMITER: "DELIMITER",

	STRING: "STRING",
	RUNE:   "RUNE",
}

func OperatorsContains(operator rune) bool {
	for _, item := range Operators {
		if item == string(operator) {
			return true
		}
	}
	return false
}
func DelimitersContains(delimiter rune) bool {
	for _, item := range Delimiters {
		if item == string(delimiter) {
			return true
		}
	}
	return false
}

func KeywordsContains(keyword string) bool {
	for _, item := range Keywords {
		if item == keyword {
			return true
		}
	}
	return false
}

func (t Token) String() string {
	return tokens[t]
}

type Position struct {
	line   int
	column int
}

type Lexer struct {
	pos    Position
	reader *bufio.Reader
}

func NewLexer(reader io.Reader) *Lexer {
	return &Lexer{
		pos:    Position{line: 1, column: 0},
		reader: bufio.NewReader(reader),
	}
}

// Lex scans the input for the next token. It returns the position of the token,
// the token's type, and the literal value.
func (l *Lexer) Lex() (Position, Token, string) {
	// keep looping until we return a token
	for {
		r, _, err := l.reader.ReadRune()
		if err != nil {
			if err == io.EOF {
				return l.pos, EOF, ""
			}
			//just return the raw error to the user
			panic(err)
		}

		l.pos.column++

		if OperatorsContains(r) {
			l.backup()
			startPos := l.pos
			tok, returnString, err := l.lexOperator()
			if err != nil {
				return l.pos, ILLEGAL, err.Error()
			}
			return startPos, tok, returnString
		}

		if DelimitersContains(r) {
			return l.pos, DELIMITER, string(r)
		}

		switch r {
		case '\n':
			l.resetPosition()
		case ';':
			return l.pos, SEMI, ";"
		case '"':
			//needs a bool flag to look for enclosing
			startPos := l.pos
			l.backup()
			var returnString, err = l.lexString()
			if err != nil {
				return startPos, ILLEGAL, err.Error()
			}
			return startPos, STRING, returnString
		case '\'':
			//search for enclosing and return rune
			startPos := l.pos
			l.backup()
			var returnRune, err = l.lexRune()
			if err != nil {
				return startPos, ILLEGAL, err.Error()
			}
			return startPos, RUNE, returnRune
		default:
			if unicode.IsSpace(r) {
				continue // nothing to do here, just move on
			} else if unicode.IsDigit(r) {
				// backup and let lexInt rescan the beginning of the int
				startPos := l.pos
				l.backup()
				lit := l.lexInt()
				return startPos, INT, lit
			} else if unicode.IsLetter(r) { //IDENTIFIERS
				// backup and let lexIdent rescan the beginning of the ident
				startPos := l.pos
				l.backup()
				tok, lit := l.lexIdent()
				return startPos, tok, lit
			} else {
				return l.pos, ILLEGAL, string(r)
			}
		}
	}
}

func (l *Lexer) resetPosition() {
	l.pos.line++
	l.pos.column = 0
}

func (l *Lexer) backup() {
	if err := l.reader.UnreadRune(); err != nil {
		panic(err)
	}
	l.pos.column--
}

// lexInt scans the input until the end of an integer and then returns the
// literal.
func (l *Lexer) lexInt() string {
	var lit string
	for {
		r, _, err := l.reader.ReadRune()
		if err != nil {
			if err == io.EOF {
				// at the end of the int
				return lit
			}
		}

		l.pos.column++
		if unicode.IsDigit(r) || r == '.' {
			lit = lit + string(r)
		} else {
			// scanned something not in the integer
			l.backup()
			return lit
		}
	}
}

// lexIdent scans the input until the end of an identifier and then returns the
// literal.
func (l *Lexer) lexIdent() (Token, string) {
	var lit string
	for {
		r, _, err := l.reader.ReadRune()
		if err != nil {
			if err == io.EOF {
				// at the end of the identifier
				return IDENT, lit
			}
		}

		l.pos.column++
		if unicode.IsLetter(r) || unicode.IsDigit(r) || r == '_'{
			lit = lit + string(r)
		} else {
			// scanned something not in the identifier
			l.backup()
			if KeywordsContains(lit) {
				return KEYWORD, lit
			}
			return IDENT, lit
		}
	}
}

func (l *Lexer) lexOperator() (Token, string, error) {
	//this needs to determine if the operator is followed by a space or another operator OR if it's a comment case // or /*
	var lit string
	var maxLen = 2
	n, _, err := l.reader.ReadRune()
	if err != nil {
		return ILLEGAL, err.Error(), err
	}

	l.pos.column++
	lit = lit + string(n)

	if n == '/' {
		r, _, err := l.reader.ReadRune()
		if err != nil {
			return ILLEGAL, err.Error(), err
		}

		l.pos.column++

		if r == '/' || r == '*' {
			//then it is a comment case -> handle here
			lit = lit + string(r)
			tok, retString, err := l.lexComment(lit)
			if err != nil {
				return ILLEGAL, err.Error(), err
			}
			return tok, retString, nil
		} else {
			l.backup()
		}

	}

	if !OperatorsContains(n) {
		return ILLEGAL, "Unknown operator", nil
	}

	for {
		if len([]rune(lit)) > maxLen {
			return ILLEGAL, lit, errors.New("Unknown operator")
		}
		n, _, err := l.reader.ReadRune()
		if err != nil {
			return ILLEGAL, err.Error(), err
		}

		l.pos.column++

		if OperatorsContains(n) {
			lit = lit + string(n)
		} else {
			l.backup()
			return OPERATOR, lit, nil
		}
	}

}

//lexString looks for starting " and enclosing "
func (l *Lexer) lexString() (string, error) {
	var lit string
	var openString bool = true

	//add the opening "
	r, _, err := l.reader.ReadRune()
	if err != nil {
		if err == io.EOF {
			// at the end of the identifier
			return "", errors.New("Unclosed string")
		}
	}

	lit = lit + string(r)
	l.pos.column++

	for {
		r, _, err := l.reader.ReadRune()
		if err != nil {
			if err == io.EOF && openString {
				// at the end of the identifier
				return "", errors.New("Unclosed string")
			}
		}

		l.pos.column++
		if r == '"' {
			//check for escapes

			finalRune := lit[len(lit)-1:]
			if finalRune == "\\" {
				lit = lit + string(r)
				continue
			}

			openString = false
			lit = lit + string(r) //close the string and return it
			return lit, nil
		} else {
			lit = lit + string(r)
		}
	}
}

func (l *Lexer) lexRune() (string, error) {
	var lit string
	var openString bool = true
	maxLength := 3

	//add the opening '
	r, _, err := l.reader.ReadRune()
	if err != nil {
		if err == io.EOF {
			// at the end of the identifier
			return "", errors.New("Unclosed rune")
		}
	}
	l.pos.column++
	lit = lit + string(r)

	for {
		if len([]rune(lit)) > maxLength {
			return lit, errors.New("Too many characters for a rune declaration")
		}

		r, _, err := l.reader.ReadRune()
		if err != nil {
			if err == io.EOF && openString {
				// at the end of the identifier
				return "", errors.New("Unclosed rune")
			}
		}

		l.pos.column++

		if r == '\'' {
			openString = false
			lit = lit + string(r) //close the rune and return it
			return lit, nil
		} else if r == '\\' && len([]rune(lit)) == 1 {
			lit = lit + string(r) //there is the \ escape char on the first position
			maxLength++
		} else {
			lit = lit + string(r)
		}
	}
}

func (l *Lexer) lexComment(lit string) (Token, string, error) {
	if lit == "//" {
		//read till end of line
		for {
			n, _, err := l.reader.ReadRune()
			if err != nil {
				return ILLEGAL, "", errors.New("Read error")
			}

			l.pos.column++

			if n == '\n' {
				return COMMENT, lit, nil
			} else {
				lit = lit + string(n)
			}

		}
	} else if lit == "/*" {
		//read till we get closing the */
		for {
			n, _, err := l.reader.ReadRune()
			if err != nil {
				return ILLEGAL, "", errors.New("Read error")
			}

			l.pos.column++

			if n == '*' {
				r, _, err := l.reader.ReadRune()
				if err != nil {
					return ILLEGAL, "", errors.New("Read error")
				}
				l.pos.column++

				if r == '/' {
					lit = lit + "*/"
					return BLOCKCOMMENT, lit, nil
				} else {
					l.backup()
				}

			} else if n == '\n' {
				l.resetPosition()
			} else {
				lit = lit + string(n)
			}

		}
	} else {
		return ILLEGAL, "", errors.New("Bad logic")
	}
}

func main() {
	file, err := os.Open("cod_go.txt")
	if err != nil {
		panic(err)
	}

	lexer := NewLexer(file)
	for {
		pos, tok, lit := lexer.Lex()
		if tok == EOF {
			break
		}

		fmt.Printf("%d:%d\t%d\t%s\t%s\n", pos.line, pos.column, len([]rune(lit)), tok, lit)
	}
}
