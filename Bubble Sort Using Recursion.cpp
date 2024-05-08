#include <iostream>
#include <vector>

void bubbleSortRecursive(std::vector<int>& arr, int n) {
    if (n == 1) {
        return;
    }
    for (int i = 0; i < n - 1; ++i) {
        if (arr[i] > arr[i + 1]) {
            std::swap(arr[i], arr[i + 1]);
        }
    }
    bubbleSortRecursive(arr, n - 1);
}

int main() {
    std::vector<int> arr = {64, 34, 25, 12, 22, 11, 90};
    bubbleSortRecursive(arr, arr.size());
    std::cout << "Sorted array: ";
    for (int num : arr) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
    return 0;
}
