#include <iostream>
#include <vector>
#include <cstdlib>
#include <bits/stdc++.h>
#include <set>

std::vector<int> generateSortedRandomVector()
{
    std::vector<int> arr(50);

    for (int i = 0; i < 50; i++)
    {
        arr[i] = rand() % 101;
    }

    std::sort(arr.begin(), arr.end());
    return arr;
}

// Solution code:

int removeDuplicates(std::vector<int> &nums)
{

    std::set<int> s;

    /*
    for (int x : nums)
    {
        s.insert(x);
    }*/

    int index = 0;

    for (size_t i = 0; i < nums.size(); i++) {
        for (int value : s){
            std::cout << " iteration: " << i << " " << value << " ";
        }
        std::cout << "ARRAY: ";
        for (int value : nums){
            std::cout << value ; 
        }
        std::cout << std::endl;
        if (s.find(nums[i]) == s.end()){
            s.insert(nums[i]); // Will only insert if not already in set.
            nums[index++] = nums[i];
        }
    }



    // return size of sorted no dups set;
    return s.size();
}

// --------------------------------------------------------------------

int main()
{

    // Setup code:
    // --------------------------------------------------------------------
    //std::vector<int> arr = generateSortedRandomVector();
    //for (size_t x = 0; x < arr.size(); x++)
    //{
    //    std::cout << x << ":" << arr[x] << "\n";
    //}

    // Manual non random vec:

    std::vector<int> arr2 = {1, 1, 1, 2, 2, 2, 3, 3, 4, 5, 5, 5};

    for (size_t x = 0; x < arr2.size(); x++)
    {
        std::cout << x << ":" << arr2[x] << "\n";
    }
    // --------------------------------------------------------------------

   // std::cout << removeDuplicates(arr) << "\n";
    std::cout << removeDuplicates(arr2) << "\n";
}