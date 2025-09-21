#include <iostream>
#include <vector>
#include <map>
#include <bits/stdc++.h>



/*
Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

You may assume that each input would have exactly one solution, and you may not use the same element twice.

You can return the answer in any order.



DATA STRUCTURE OF CHOICE:

MAP to store value and indice.

*/

void printMap(std::map<int,int> thing) {

    std::cout << "\n";
       for (const auto& pair : thing) {
        std::cout << "Key: " << pair.first << ", Value(index of element): " << pair.second << std::endl;
    }
    std::cout << "end of thing.";
}


template <typename T>
void printVector(std::vector<T> arr) {

       for (const auto x : arr) {
        std::cout << x << ",";
    }
    std::cout << "\n";
}

std::vector<int>  twoSum(std::vector<int>& nums, int target) {

    std::map<int,int> seen;
    std::vector<int> res;

    for (size_t i=0; i <= nums.size(); i++ ) {

            int complement;
            complement = target - nums[i];

            if(seen.find(complement) != seen.end()) {
                res.push_back(seen[complement]);
                res.push_back(i);
                return res;
            }
            else if (seen.find(nums[i]) == seen.end()) { // if not found
                seen.insert({nums[i],i});
                continue;
            }
    }
    return res;
}

int main() {



    // Setup code:
    // --------------------------------------------------------------------
    //std::vector<int> arr = generateSortedRandomVector();
    //for (size_t x = 0; x < arr.size(); x++)
    //{
    //    std::cout << x << ":" << arr[x] << "\n";
    //}

    // Manual non random vec:

    std::vector<int> arr2 = {3,3,4,5};

    for (size_t x = 0; x < arr2.size(); x++)
    {
        std::cout << arr2[x] << ",";
    }
    // --------------------------------------------------------------------

    std::cout << "\n";
    


    std::vector res = twoSum(arr2,6);

    std::cout << "FINAL ARR: \n";

    printVector(res);


}