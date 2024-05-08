// Write a program to implement the pancake sort algorithm.

#include <iostream>
#include <vector>

void flip(std::vector<int>& arr, int i) {
    int start = 0;
    while (start < i) {
        std::swap(arr[start], arr[i]);
        start++;
        i--;
    }
}

int findMaxIndex(std::vector<int>& arr, int n) {
    int maxIndex = 0;
    for (int i = 0; i < n; ++i) {
        if (arr[i] > arr[maxIndex]) {
            maxIndex = i;
        }
    }
    return maxIndex;
}

void pancakeSort(std::vector<int>& arr) {
    int n = arr.size();
    for (int currSize = n; currSize > 1; --currSize) {
        int maxIndex = findMaxIndex(arr, currSize);
        if (maxIndex != currSize - 1) {
            flip(arr, maxIndex);
            flip(arr, currSize - 1);
        }
    }
}

int main() {
    std::vector<int> arr = {23, 10, 20, 11, 12, 6, 7};
    pancakeSort(arr);
    std::cout << "Sorted array: ";
    for (int num : arr) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
    return 0;
}
