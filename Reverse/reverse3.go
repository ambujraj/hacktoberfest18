package main

import (
	"fmt"
	"strconv"
)

func reverse(num int64) int64 {
	var ans, count int64
	for num > 0 {
		mod := num % 10
		ans = 10*ans + mod
		num = num / 10
		count += 1
	}
	return ans
}

func main() {
	fmt.Print("Enter number to reverse: ")
	var input string
	fmt.Scanln(&input)

	num, _ := strconv.ParseInt(input, 10, 64)
	fmt.Printf("Reverse number of %v is %v.\n", input, reverse(num))
}
