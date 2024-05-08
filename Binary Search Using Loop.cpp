#include <iostream>
#include <vector>

int binarySearch(const std::vector<int>& arr, int target) {
    int low = 0, high = arr.size() - 1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] == target) {
            return mid; // Return index if found
        } else if (arr[mid] < target) {
            low = mid + 1; // Continue searching in the right half
        } else {
            high = mid - 1; // Continue searching in the left half
        }
    }
    return -1; // Return -1 if not found
}

int main() {
    std::vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int target = 5;
    int index = binarySearch(arr, target);
    if (index != -1) {
        std::cout << "Element " << target << " found at index " << index << std::endl;
    } else {
        std::cout << "Element " << target << " not found" << std::endl;
    }
    return 0;
}
