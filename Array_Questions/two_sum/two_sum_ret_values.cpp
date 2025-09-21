#include <iostream>
#include <vector>
#include <bits/stdc++.h>



/*
RETURNING VALUES THAT ADD TOGETHER


DATA STRUCTURE OF CHOICE:

SET to store unique values from the array and check for a matching compliment.
*/

std::vector<int>  twoSum(std::vector<int>& nums, int target) {

    std::set<int> seen;
    std::vector<int> res;

    for (size_t i=0; i < nums.size(); i++ ) {

        if(seen.find(nums[i]) == seen.end()) // if not found
        {
            int complement;
            complement = target - nums[i];

            if(seen.find(complement) != seen.end()) {
                res.push_back(complement);
                res.push_back(nums[i]);
                return res;
            }
            else {
                seen.insert(nums[i]);
                continue;
            }


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

    std::vector<int> arr2 = {2,3,4,5,7,9};

    for (size_t x = 0; x < arr2.size(); x++)
    {
        std::cout << arr2[x] << ",";
    }
    // --------------------------------------------------------------------

    std::cout << "\n";
    twoSum(arr2,8);


    std::vector res = twoSum(arr2,8);

    for (int x : res) {
        std::cout << x << " ";
    }


}