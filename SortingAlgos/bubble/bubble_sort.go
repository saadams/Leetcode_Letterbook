package main

import "fmt"


func bubbleSort(arr []int) {

	len := len(arr)
	var swapped bool

	for i := 0; i < len - 1; i++ {
		swapped = false

		for j := 0; j < len-i - 1; j++ {


			// check if arr[j] > than next ele
			if arr[j] > arr[j+1] {
				//swap 

				temp := arr[j]
				arr[j] = arr[j+1]
				arr[j+1] = temp

				// we swapped
				swapped = true
			}
		}
		if !swapped {
			break
		}
	}

}


func main() {

	var arr1 = [...] int {5,20,25,67,89,223,5,54}


	fmt.Println("hello world")

	fmt.Println("Unswaped Arr:" , arr1)

	bubbleSort(arr1[:])

	fmt.Println("Swapped Arr:" , arr1)


}