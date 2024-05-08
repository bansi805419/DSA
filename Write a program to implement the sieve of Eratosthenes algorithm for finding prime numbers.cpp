// Write a program to implement the sieve of Eratosthenes algorithm for finding prime numbers.

#include <iostream>
#include <vector>

void sieveOfEratosthenes(int n) {
    std::vector<bool> isPrime(n + 1, true);

    for (int p = 2; p * p <= n; ++p) {
        if (isPrime[p]) {
            for (int i = p * p; i <= n; i += p) {
                isPrime[i] = false;
            }
        }
    }

    std::cout << "Prime numbers up to " << n << " are:" << std::endl;
    for (int p = 2; p <= n; ++p) {
        if (isPrime[p]) {
            std::cout << p << " ";
        }
    }
    std::cout << std::endl;
}

int main() {
    int n = 30; // Find primes up to 30
    sieveOfEratosthenes(n);
    return 0;
}
