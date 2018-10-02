package main

import (
	"fmt"
	"strconv"
)

func fac(num int64) int64 {
	if num == 0 || num == 1 {
		return 1
	}
	return num * fac(num-1)
}

func main() {
	fmt.Print("Enter number to factorial: ")
	var input string
	fmt.Scanln(&input)

	num, _ := strconv.ParseInt(input, 10, 64)
	fmt.Printf("Factorial of %v is %v.\n", input, fac(num))
}
