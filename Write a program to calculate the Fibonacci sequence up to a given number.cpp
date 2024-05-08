// Write a program to calculate the Fibonacci sequence up to a given number.

#include <iostream>
#include <vector>

std::vector<int> fibonacci(int n) {
    std::vector<int> fibSeq;
    fibSeq.push_back(0);
    fibSeq.push_back(1);

    for (int i = 2; i <= n; ++i) {
        int fib = fibSeq[i - 1] + fibSeq[i - 2];
        fibSeq.push_back(fib);
    }

    return fibSeq;
}

int main() {
    int n = 10;
    std::vector<int> fibSeq = fibonacci(n);

    std::cout << "Fibonacci sequence up to " << n << " terms:" << std::endl;
    for (int num : fibSeq)
        std::cout << num << " ";
    std::cout << std::endl;

    return 0;
}
