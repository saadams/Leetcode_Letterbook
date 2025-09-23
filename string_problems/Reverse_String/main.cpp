#include <iostream>
#include <string>
#include <vector>

void reverseString(std::vector<char> &s)
{

    // Two pointer

    /*
     If the arr is even need case for middle char which is not swaped

     If the arr is odd just swap the middle two.

     Could use start pointer and end pointer and swap and increment/decrement as defined.


     
    */

    int j = s.size() - 1;
    int i = 0;
    char temp;
    // std::cout << j << "\n";
    // std::cout << s[j];

    for (j; j > i; j--)
    {
        std::cout << s[j];
        std::cout << ",";
        std::cout << s[i];
        std::cout << "\n";
        

        if (i != j){
            //Swap
            temp = s[j];
            s[j] = s[i];
            s[i] = temp;
            i++;
        }

    }


}

int main()
{

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