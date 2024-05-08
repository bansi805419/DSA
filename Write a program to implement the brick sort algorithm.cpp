// Write a program to implement the brick sort algorithm.

#include <iostream>
#include <vector>
#include <algorithm>

void brickSort(std::vector<int>& arr) {
    bool sorted = false;
    int n = arr.size();
    while (!sorted) {
        sorted = true;
        for (int i = 1; i <= n - 2; i += 2) {
            if (arr[i] > arr[i + 1]) {
                std::swap(arr[i], arr[i + 1]);
                sorted = false;
            }
        }
        for (int i = 0; i <= n - 2; i += 2) {
            if (arr[i] > arr[i + 1]) {
                std::swap(arr[i], arr[i + 1]);
                sorted = false;
            }
        }
    }
}

int main() {
    std::vector<int> arr = {5, 2, 4, 1, 3};
    brickSort(arr);
    std::cout << "Sorted array: ";
    for (int num : arr) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
    return 0;
}
