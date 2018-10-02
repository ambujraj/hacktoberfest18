package main

import (
	"fmt"
	"strconv"
)

func fib(num int64) {
	tmp := make([]int64, num)
	for i := int64(0); i < num; i++ {
		if i == 0 || i == 1 {
			tmp[i] = i
		} else {
			tmp[i] = tmp[i-2] + tmp[i-1]
		}
	}

	fmt.Print("The fibonnaci series is: ")
	for _, item := range tmp {
		fmt.Printf("%v ", item)
	}
	fmt.Println()
}

func main() {
	fmt.Print("Enter the number of terms: ")
	var input string
	fmt.Scanln(&input)

	num, _ := strconv.ParseInt(input, 10, 64)
	fib(num)
}
