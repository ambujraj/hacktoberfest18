package main

import "fmt"

func min(a int, b int) int {
	if a < b {
		return a
	}
	return b
}

func max(a int, b int) int {
	if a > b {
		return a
	}
	return b
}
func main() {
	var n, k, elemen, count int
	fmt.Scanf("%d %d", &n, &k)

	arr := make([]int, k+1)
	for i := 0; i < n; i++ {
		fmt.Scan(&elemen)
		arr[elemen%k]++
	}

	count = min(arr[0], 1)
	for i := 1; i < (k>>1)+1; i++ {
		if i != k-i {
			count += max(arr[i], arr[k-i])
		}
	}
	if k%2 == 0 {
		count++
	}
	fmt.Println(count)
}
