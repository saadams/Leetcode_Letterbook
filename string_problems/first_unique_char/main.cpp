#include <iostream>
#include <string>
#include <map>



void printMap(std::map<char,int> m) {

    for (auto it = m.begin(); it != m.end(); ++it) 
        std::cout << it->first << " " << it->second
        << std::endl;

}
// Return index of the char
int firstUniqueChar(std::string s) {
        
    //Store index of char

    // We only care about the first non repeating char!

    // Keep track of index
   

    // Create array for all alpha chars filled with zeros.
    int freq[26] = {0};

    
    std::cout << 'l' - 'a' << "\n";


    /*
    Walk through the the given string.
    Assign index in freq to [c-'a'] 'a' = freq[0] 'b' = freq[1] etc...
    Then increment the value store in that given index.
    This gives the frequency of a given char.
    */
    for (char c : s) {
        freq[c-'a']++;
    }

    for (int value : freq) {
        std::cout << value <<",";
    }

    int n = s.length();

    for (int i=0; i < n; i++) {
        if (freq[s[i] -  'a'] == 1) {
            return i;
        }
    }


    return -1;




}



int main() {


    std::string s1 = "leetcode";

    std::string s2 = "loveleetcode";

    std::string s3 = "aabb";

    if (firstUniqueChar(s1) == 0)// should be 0
    {
        std::cout << "\nPASSED!\n";
    } 
    else {
        std::cout << "\nFailed!\n";
    }



    if (firstUniqueChar(s2) == 2)// should be 0
    {
        std::cout << "\nPASSED!\n";
    } 
    else {
        std::cout << "\nFailed!\n";
    }



    if (firstUniqueChar(s3) == -1)// should be 0
    {
        std::cout << "\nPASSED!\n";
    } 
    else {
        std::cout << "\nFailed!\n";
    }



}