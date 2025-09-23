

#include <iostream>
#include <stack>
#include <vector>





void reverseString(std::vector<char>& s) {


    /*  Using a stack:

        push items into stack then simply add the top element of the stack to the arr and index i. This will natrually reverse the arr.
    */


    std::stack<char> stack;

    // std::cout << j << "\n";
    // std::cout << s[j];

    for (int i = 0; i < s.size(); i++)
    {
        stack.push(s[i]);
    }
    int i = 0;
    while(!stack.empty()) {
        s[i] = stack.top();
        stack.pop();
        i++;
    }
}


int main() {


    std::vector<char> s = {'h', 'e', 'l', 'a','l', 'o'};

    for (const auto x : s)
    {
        std::cout << x;
    }
    std::cout << "\n";

    reverseString(s);

    std::cout << "Final Arr: \n";
    for (const auto x : s)
    {
        std::cout << x;
    }
     std::cout << " \n";
    
}