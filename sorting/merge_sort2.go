package main

import (
	"fmt"
)

func merge (a []int, b []int) []int {
  var r = make([]int, len(a) + len(b))
  var i = 0
  var j = 0

  for i < len(a) && j < len(b) {
    if a[i] <= b[j] {
      r[i+j] = a[i]
      i++
    } else {
      r[i+j] = b[j]
      j++
    }
  }

  for i < len(a) { r[i+j] = a[i]; i++ }
  for j < len(b) { r[i+j] = b[j]; j++ }

  return r
}

func MergeSort(array []int) (sorted []int){
	if(len(array) < 2){
		sorted = array
		return
	}
	// divide the array into two halves
	halfLen := len(array)/2
	
	firstHalf := array[ 0:halfLen ]
	secondHalf := array[ halfLen: ]

	sorted = merge(MergeSort(firstHalf), MergeSort(secondHalf))
	return
}

func main() {
	// EXAMPLE USAGE
	array := []int{4,1,2,4,14,1,1,9,34,25,2,1}
	fmt.Println(MergeSort(array))	//[1 1 1 1 2 2 4 4 9 14 25 34]
}
