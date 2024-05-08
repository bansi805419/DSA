// Create a program to check if a given number is Armstrong number or not.

#include <iostream>
#include <cmath>

bool isArmstrong(int num) {
    int originalNum = num;
    int numDigits = 0;
    int sum = 0;

    while (num != 0) {
        num /= 10;
        numDigits++;
    }

    num = originalNum;

    while (num != 0) {
        int digit = num % 10;
        sum += pow(digit, numDigits);
        num /= 10;
    }

    return sum == originalNum;
}

int main() {
    int num = 153; // Example of Armstrong number
    std::cout << num << " is " << (isArmstrong(num) ? "an Armstrong number." : "not an Armstrong number.") << std::endl;
    return 0;
}
