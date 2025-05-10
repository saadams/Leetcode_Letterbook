package main

import "fmt"

func rotate(nums []int, k int) {

	var n = len(nums)

	for i := 0; i < k; i++ {

		last := nums[len(nums)-1] // Get the last element in array.

		//fmt.Println(last)

		for j := n - 1; j > 0; j-- {
			// Set current index value to the next value decreasing
			nums[j] = nums[j-1]
		}
		// Set first element of modifyed array to the last element of the og array
		nums[0] = last
	}

}

func main() {
	var nums = []int{1, 2, 3, 4, 5, 6, 7, 8, 9}
	k := 3

	fmt.Println("Original Array")
	for i := 0; i < len(nums); i++ {
		fmt.Println(nums[i])
	}

	fmt.Println("---------------------------------------------------------")
	rotate(nums, k)

	fmt.Println("New Array")
	for i := 0; i < len(nums); i++ {
		fmt.Println(nums[i])
	}

}
