# Bubble Sort


A simple yet slow sorting algo:


* Pros:
    * Easy to implement

* Cons:
    * Slow O(n^2)


### Steps:

* Get array length:
    `len := len(arr)`

* Setup swapped var to check if eles have been swapped:
    `var swapped bool`

* Setup first outer loop and set swapped to false:

```
	len := len(arr)
	var swapped bool

	for i := 0; i < len - 1; i++ {
		swapped = false
	}


```

* Setup inner loop: 

```
	len := len(arr)
	var swapped bool

	for i := 0; i < len - 1; i++ {
		swapped = false

		for j := 0; j < len-i - 1; j++ {
        
            ...
        }

	}
```


* Check if value at j is greater than next value (j+1): 

```
	len := len(arr)
	var swapped bool

	for i := 0; i < len - 1; i++ {
		swapped = false

		for j := 0; j < len-i - 1; j++ {

            // check if arr[j] > than next ele
			if arr[j] > arr[j+1] {
				//swap 
			}
            
        }

	}
```

* If so swap: 

```
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

	}
```

* Add conditional check to outer loop to check if no swaps occured indicating array is sorted: 

```
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
```