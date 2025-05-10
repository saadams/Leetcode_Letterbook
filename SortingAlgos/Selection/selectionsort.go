package main

import (
	"fmt"
)


func selection_sort(arr []int) {
	
	len := len(arr)
	// we need min 

	for i := 0; i < len -1; i++ {
		min_idx := i
		for j := i+1; j < len ; j++ {
			if arr[j] < arr[min_idx] {
				min_idx = j
			}
			
		}

		// Swap here
		temp := arr[i]
		arr[i] = arr[min_idx]
		arr[min_idx]  = temp
		
	}

}



func main() {



	var arr1 = [...] int {5,20,25,67,89,223,5,54}


	fmt.Println("hello world")

	fmt.Println("Unswaped Arr:" , arr1)

	selection_sort(arr1[:])

	fmt.Println("Swapped Arr:" , arr1)
}
