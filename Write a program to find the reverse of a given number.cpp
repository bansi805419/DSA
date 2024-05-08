// Write a program to find the reverse of a given number.

#include <iostream>

int reverseNumber(int num) {
    int reversed = 0;
    while (num != 0) {
        reversed = reversed * 10 + num % 10;
        num /= 10;
    }
    return reversed;
}

int main() {
    int num = 12345;
    std::cout << "Reverse of " << num << " is: " << reverseNumber(num) << std::endl;
    return 0;
}
