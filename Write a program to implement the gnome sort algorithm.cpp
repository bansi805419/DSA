// Write a program to implement the gnome sort algorithm.

#include <iostream>
#include <vector>

void gnomeSort(std::vector<int>& arr) {
    int n = arr.size();
    int index = 0;

    while (index < n) {
        if (index == 0) {
            ++index;
        }
        if (arr[index] >= arr[index - 1]) {
            ++index;
        } else {
            std::swap(arr[index], arr[index - 1]);
            --index;
        }
    }
}

int main() {
    std::vector<int> arr = {5, 2, 4, 1, 3};
    gnomeSort(arr);
    std::cout << "Sorted array: ";
    for (int num : arr) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
    return 0;
}
