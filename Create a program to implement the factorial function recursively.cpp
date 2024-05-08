// Create a program to implement the factorial function recursively.

#include <iostream>

unsigned long long factorial(int n) {
    if (n == 0)
        return 1;
    return n * factorial(n - 1);
}

int main() {
    int n = 10;
    std::cout << "Factorial of " << n << " is: " << factorial(n) << std::endl;
    return 0;
}
