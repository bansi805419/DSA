// Create a function to check if a string is a palindrome.

#include <iostream>
#include <string>
#include <algorithm>

bool isPalindrome(const std::string& str) {
    std::string temp = str;
    std::reverse(temp.begin(), temp.end());
    return str == temp;
}

int main() {
    std::string str1 = "radar";
    std::string str2 = "hello";

    std::cout << str1 << " is " << (isPalindrome(str1) ? "a palindrome" : "not a palindrome") << std::endl;
    std::cout << str2 << " is " << (isPalindrome(str2) ? "a palindrome" : "not a palindrome") << std::endl;

    return 0;
}
