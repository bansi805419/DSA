// Develop a program to implement the comb sort algorithm.

#include <iostream>
#include <vector>

void combSort(std::vector<int>& arr) {
    int n = arr.size();
    int gap = n;
    bool swapped = true;

    while (gap != 1 || swapped) {
        gap = std::max(1, static_cast<int>(gap / 1.3));
        swapped = false;
        for (int i = 0; i < n - gap; ++i) {
            if (arr[i] > arr[i + gap]) {
                std::swap(arr[i], arr[i + gap]);
                swapped = true;
            }
        }
    }
}

int main() {
    std::vector<int> arr = {5, 2, 4, 1, 3};
    combSort(arr);
    std::cout << "Sorted array: ";
    for (int num : arr) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
    return 0;
}
