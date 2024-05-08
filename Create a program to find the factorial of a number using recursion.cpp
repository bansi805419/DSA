// Create a program to find the factorial of a number using recursion.

#include <iostream>

unsigned long long factorial(int n) {
    if (n == 0)
        return 1;
    return n * factorial(n - 1);
}

int main() {
    int n = 10; // Example number
    std::cout << "Factorial of " << n << " is: " << factorial(n) << std::endl;
    return 0;
}
