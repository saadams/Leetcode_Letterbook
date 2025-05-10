# Rotate Array ideas:




## Version 1:

    
#### Rotate by one within a loop.


Idea:
    Implement a simple right shift by one then put that in a for loop to loop multiple times.

Steps:

    1: Create outer loop for desired number of rotations.
    ```
     for   j := 0; j < k; j++ {
        
   
    }
    ```
    2:  Get last element `n-1` where `n` is the length of the array.

    ```

    // Set first element of modifyed array to the last element of the og array
    nums[0] = last
    ```
    3: Create inner loop which rotates array by 1.
    ```
     for   j := 0; j < k; j++ {
        
    last := nums[len(nums)-1] // Get the last element in array.
        
        fmt.Println(last)
        
    for  i := n-1; i > 0; i-- {
        // Set current index value to the next value decreasing
        nums[i] = nums[i-1]
    }
  
    }
    ```
    5: Add the last element from orginal array to first element of new array after inner loop:
    ```
for   j := 0; j < k; j++ {
        
    last := nums[len(nums)-1] // Get the last element in array.
        
        fmt.Println(last)
        
    for  i := n-1; i > 0; i-- {
        // Set current index value to the next value decreasing
        nums[i] = nums[i-1]
    }
    // Set first element of modifyed array to the last element of the og array
    nums[0] = last
}
    ```

    5: Profit:
    ```
    package main

import "fmt"

func rotate(nums []int, k int) {

	var n = len(nums)

	for j := 0; j < k; j++ {

		last := nums[len(nums)-1] // Get the last element in array.

		//fmt.Println(last)

		for i := n - 1; i > 0; i-- {
			// Set current index value to the next value decreasing
			nums[i] = nums[i-1]
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


    ```




Basic issues I had:

* Last declared outside of loop.
* Which direction to traverse ie (last ele to first).