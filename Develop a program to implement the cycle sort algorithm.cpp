// Develop a program to implement the cycle sort algorithm.

#include <iostream>
#include <vector>

void cycleSort(std::vector<int>& arr) {
    int n = arr.size();

    for (int start = 0; start < n - 1; ++start) {
        int element = arr[start];
        int position = start;
        for (int i = start + 1; i < n; ++i) {
            if (arr[i] < element) {
                position++;
            }
        }
        if (position == start) {
            continue;
        }
        while (element == arr[position]) {
            position++;
        }
        if (position != start) {
            std::swap(element, arr[position]);
        }
        while (position != start) {
            position = start;
            for (int i = start + 1; i < n; ++i) {
                if (arr[i] < element) {
                    position++;
                }
            }
            while (element == arr[position]) {
                position++;
            }
            if (element != arr[position]) {
                std::swap(element, arr[position]);
            }
        }
    }
}

int main() {
    std::vector<int> arr = {5, 2, 4, 1, 3};
    cycleSort(arr);
    std::cout << "Sorted array: ";
    for (int num : arr) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
    return 0;
}
