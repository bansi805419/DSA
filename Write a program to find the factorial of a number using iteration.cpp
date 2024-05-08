// Write a program to find the factorial of a number using iteration.

#include <iostream>

unsigned long long factorial(int n) {
    unsigned long long result = 1;
    for (int i = 1; i <= n; ++i) {
        result *= i;
    }
    return result;
}

int main() {
    int n = 10; // Example number
    std::cout << "Factorial of " << n << " is: " << factorial(n) << std::endl;
    return 0;
}
