// Develop a program to calculate the sum of digits of a positive integer recursively.

#include <iostream>

int sumOfDigits(int n) {
    if (n < 10)
        return n;
    return n % 10 + sumOfDigits(n / 10);
}

int main() {
    int num = 12345;
    std::cout << "Sum of digits of " << num << " is: " << sumOfDigits(num) << std::endl;
    return 0;
}
