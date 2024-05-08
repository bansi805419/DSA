// Write a program to reverse a given string.

#include <iostream>
#include <string>
#include <algorithm>

std::string reverseString(const std::string& str) {
    std::string reversed = str;
    std::reverse(reversed.begin(), reversed.end());
    return reversed;
}

int main() {
    std::string str = "hello";
    std::cout << "Original string: " << str << std::endl;
    std::cout << "Reversed string: " << reverseString(str) << std::endl;
    return 0;
}
