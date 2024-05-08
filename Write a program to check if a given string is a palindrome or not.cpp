// Write a program to check if a given string is a palindrome or not.

#include <iostream>
#include <string>
#include <algorithm>

bool isPalindrome(const std::string& str) {
    std::string temp = str;
    std::reverse(temp.begin(), temp.end());
    return str == temp;
}

int main() {
    std::string str = "radar";
    std::cout << "Is \"" << str << "\" a palindrome? " << (isPalindrome(str) ? "Yes" : "No") << std::endl;
    return 0;
}
