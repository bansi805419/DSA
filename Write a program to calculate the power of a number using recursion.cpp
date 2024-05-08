// Write a program to calculate the power of a number using recursion.

#include <iostream>

double power(double base, int exponent) {
    if (exponent == 0)
        return 1;
    else if (exponent < 0)
        return 1 / power(base, -exponent);
    else
        return base * power(base, exponent - 1);
}

int main() {
    double base = 2.5;
    int exponent = 3;
    std::cout << base << " raised to the power " << exponent << " is: " << power(base, exponent) << std::endl;
    return 0;
}
