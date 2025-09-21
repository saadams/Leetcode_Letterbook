package main

import (
	"fmt"
	"math/rand"
)


func selectionSort(arr []int) {
	
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

func randomizeArr(randMin int, randMax int, lengthArr int) []int {
	// add random nums to array up to length
	var arr []int
	for i := 0; i < lengthArr; i++ {
		randInt := rand.Intn(randMax-randMin) + randMin
		arr = append(arr, randInt)
	}
	return arr
}

func main() {

	//var arr1 = [...] int {1,5,6,3,7,9,55,33,22,11}

	arr2 := randomizeArr(1,1000, 20)

	fmt.Println("This is the random array: ", arr2)


	//bubbleSort(arr1[:])
	selectionSort(arr2[:])
	fmt.Println("Sorted arr: " , arr2)


}
