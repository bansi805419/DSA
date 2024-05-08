// Write a program to check if a given number is a palindrome or not without using extra space.

#include <iostream>

bool isPalindrome(int num) {
    if (num < 0 || (num % 10 == 0 && num != 0))
        return false;

    int reversed = 0;
    while (num > reversed) {
        reversed = reversed * 10 + num % 10;
        num /= 10;
    }

    return num == reversed || num == reversed / 10;
}

int main() {
    int num = 12321; // Example of a palindrome number
    std::cout << num << " is " << (isPalindrome(num) ? "a palindrome." : "not a palindrome.") << std::endl;
    return 0;
}
