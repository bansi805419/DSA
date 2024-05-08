// Develop a program to find the smallest element in an array.

#include <iostream>
#include <vector>
#include <climits>

int findSmallest(const std::vector<int>& arr) {
    int smallest = INT_MAX;
    for (int num : arr) {
        if (num < smallest) {
            smallest = num;
        }
    }
    return smallest;
}

int main() {
    std::vector<int> arr = {10, 30, 50, 20, 40};
    std::cout << "Smallest element in the array: " << findSmallest(arr) << std::endl;
    return 0;
}
