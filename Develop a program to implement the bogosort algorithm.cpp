// Develop a program to implement the bogosort algorithm.

#include <iostream>
#include <vector>
#include <algorithm>
#include <random>

bool isSorted(const std::vector<int>& arr) {
    for (int i = 1; i < arr.size(); ++i) {
        if (arr[i - 1] > arr[i]) {
            return false;
        }
    }
    return true;
}

void bogosort(std::vector<int>& arr) {
    std::random_device rd;
    std::mt19937 g(rd());

    while (!isSorted(arr)) {
        std::shuffle(arr.begin(), arr.end(), g);
    }
}

int main() {
    std::vector<int> arr = {5, 2, 4, 1, 3};
    bogosort(arr);
    std::cout << "Sorted array: ";
    for (int num : arr) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
    return 0;
}
