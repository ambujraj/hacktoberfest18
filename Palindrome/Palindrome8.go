package main

import "fmt"

func checkPalindrome(input string) bool {
	for i := 0; i < len(input)/2; i++ {
		if input[i] != input[len(input)-1-i] {
			return false
		}
	}
	return true
}

func main() {
	fmt.Print("Enter the string to check palindrome: ")
	var input string
	fmt.Scanln(&input)

	isPalindrome := checkPalindrome(input)
	if isPalindrome {
		fmt.Println("The entered value is pallindrome")
	} else {
		fmt.Println("The entered value is not pallindrome")
	}
}
