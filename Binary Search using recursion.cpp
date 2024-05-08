#include <iostream>
#include <vector>

int binarySearchRecursive(const std::vector<int>& arr, int target, int low, int high) {
    if (low > high) {
        return -1; // Base case: element not found
    }
    int mid = low + (high - low) / 2;
    if (arr[mid] == target) {
        return mid; // Base case: element found
    } else if (arr[mid] < target) {
        return binarySearchRecursive(arr, target, mid + 1, high); // Continue searching in the right half
    } else {
        return binarySearchRecursive(arr, target, low, mid - 1); // Continue searching in the left half
    }
}

int main() {
    std::vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int target = 5;
    int index = binarySearchRecursive(arr, target, 0, arr.size() - 1); // Start searching from indices 0 and arr.size() - 1
    if (index != -1) {
        std::cout << "Element " << target << " found at index " << index << std::endl;
    } else {
        std::cout << "Element " << target << " not found" << std::endl;
    }
    return 0;
}
