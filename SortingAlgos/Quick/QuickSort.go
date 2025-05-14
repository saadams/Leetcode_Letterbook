package main

import (
	"fmt"
)

func swap(arr []int, a int, b int) {

	temp := arr[a]
	arr[a] = arr[b]
	arr[b] = temp

}

func partition(arr []int, low int, high int) int {
	pivot := arr[high]

	i := low - 1

	for j := low; j <= high-1; j++ {
		if arr[j] < pivot {
			i++
			//swap
			swap(arr, i, j)

		}
	}

	swap(arr, i+1, high)
	return i + 1
}

func quickSort(arr []int, low int, high int) {

	// do something here
	if low < high {

		partitionIdx := partition(arr, low, high)

		quickSort(arr, low, partitionIdx-1)
		quickSort(arr, partitionIdx+1, high)
	}
}
func main() {
	arr1 := [...]int{1, 55, 22, 33, 77, 88}
	n := len(arr1)

	fmt.Println("Hello World!", arr1)
	quickSort(arr1[:], 0, n-1)

	//swap(arr1[:], 2, 1)

	fmt.Println("Hello World2", arr1)

}
