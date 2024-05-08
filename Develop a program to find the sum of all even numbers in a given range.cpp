// Develop a program to find the sum of all even numbers in a given range.

#include <iostream>

int sumOfEven(int start, int end) {
    int sum = 0;
    for (int i = start; i <= end; ++i) {
        if (i % 2 == 0) {
            sum += i;
        }
    }
    return sum;
}

int main() {
    int start = 1;
    int end = 10;
    std::cout << "Sum of even numbers between " << start << " and " << end << " is: " << sumOfEven(start, end) << std::endl;
    return 0;
}
