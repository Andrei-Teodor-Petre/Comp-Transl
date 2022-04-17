package main

import "fmt"

func minRemoveToMakeValid(s string) string {
	openCounter := 0

	chars := []rune(s)
	var stack []int

	for pos, ru := range chars {
		if ru == ')' && !(openCounter > 0) { // in this case remove -> so push the index to the stack
			stack = append(stack, pos)
		} else if ru == '(' {
			stack = append(stack, pos)
			openCounter++
		} else if ru == ')' {
			stack = stack[:len(stack)-1]
			openCounter--
		}
	}

	if len(stack) > 0 {
		for i := 0; i <= len(stack)-1; i++ {
			stack[i] -= i
			chars = append(chars[:stack[i]], chars[stack[i]+1:]...)
		}
	}

	retVal := string(chars)
	return retVal
}

func twoSum(nums []int, target int) []int {
	//map the index and the target diff
	//when number is = to target diff add return index and current index
	var solMap = make(map[int]int)

	for i, nr := range nums {
		solMap[target-nr] = i
	}

	for i, nr := range nums {
		if solMap[nr] != 0 && solMap[nr] != i{
			return []int{i, solMap[nr]}
		}
	}

	return []int{}
}

func main() {
	//var s = "))(("
	//var result = minRemoveToMakeValid(s)

	var array = []int{1,3,4,2}
	var target = 6

	var outputTwoSum = twoSum(array, target)

	if len(outputTwoSum) == 0 {
		fmt.Println("Solution either does not exist or is not unique")
	}

	fmt.Println(outputTwoSum)
}
