package main

import (
	"fmt"
	"math/rand"
)


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

	fmt.Println("Hello world!")

	//bubbleSort(arr1[:])
	bubbleSort(arr2[:])
	fmt.Println("Sorted arr: " , arr2)


}