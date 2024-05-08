// Develop a program to implement the stooge sort algorithm.

#include <iostream>
#include <vector>

void stoogeSort(std::vector<int>& arr, int low, int high) {
    if (low >= high)
        return;

    if (arr[low] > arr[high])
        std::swap(arr[low], arr[high]);

    if (high - low + 1 > 2) {
        int t = (high - low + 1) / 3;

        stoogeSort(arr, low, high - t);
        stoogeSort(arr, low + t, high);
        stoogeSort(arr, low, high - t);
    }
}

int main() {
    std::vector<int> arr = {2, 4, 5, 3, 1};
    int n = arr.size();
    stoogeSort(arr, 0, n - 1);
    std::cout << "Sorted array: ";
    for (int num : arr) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
    return 0;
}
