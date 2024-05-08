// Write a program to implement the radix sort algorithm.

#include <iostream>
#include <vector>
#include <algorithm>

void countingSort(std::vector<int>& arr, int exp) {
    int n = arr.size();
    std::vector<int> output(n), count(10, 0);

    for (int num : arr) {
        count[(num / exp) % 10]++;
    }

    for (int i = 1; i < 10; ++i) {
        count[i] += count[i - 1];
    }

    for (int i = n - 1; i >= 0; --i) {
        output[count[(arr[i] / exp) % 10] - 1] = arr[i];
        count[(arr[i] / exp) % 10]--;
    }

    for (int i = 0; i < n; ++i) {
        arr[i] = output[i];
    }
}

void radixSort(std::vector<int>& arr) {
    int maxElement = *std::max_element(arr.begin(), arr.end());
    for (int exp = 1; maxElement / exp > 0; exp *= 10) {
        countingSort(arr, exp);
    }
}

int main() {
    std::vector<int> arr = {170, 45, 75, 90, 802, 24, 2, 66};
    radixSort(arr);
    std::cout << "Sorted array: ";
    for (int num : arr) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
    return 0;
}
