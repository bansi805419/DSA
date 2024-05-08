// Write a program to find the largest element in an array.

#include <iostream>
#include <vector>
#include <climits>

int findLargest(const std::vector<int>& arr) {
    int largest = INT_MIN;
    for (int num : arr) {
        if (num > largest) {
            largest = num;
        }
    }
    return largest;
}

int main() {
    std::vector<int> arr = {10, 30, 50, 20, 40};
    std::cout << "Largest element in the array: " << findLargest(arr) << std::endl;
    return 0;
}
