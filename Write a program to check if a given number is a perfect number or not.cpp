// Write a program to check if a given number is a perfect number or not.

#include <iostream>

bool isPerfectNumber(int num) {
    int sum = 1;
    for (int i = 2; i * i <= num; ++i) {
        if (num % i == 0) {
            sum += i;
            if (i * i != num) {
                sum += num / i;
            }
        }
    }
    return sum == num && num != 1;
}

int main() {
    int num = 28; // Example of perfect number
    std::cout << num << " is " << (isPerfectNumber(num) ? "a perfect number." : "not a perfect number.") << std::endl;
    return 0;
}
