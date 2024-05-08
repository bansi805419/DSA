#include <iostream>
#include <vector>

int linearSearchRecursive(const std::vector<int>& arr, int target, int index) {
    if (index >= arr.size()) {
        return -1; // Base case: element not found
    }
    if (arr[index] == target) {
        return index; // Base case: element found
    }
    return linearSearchRecursive(arr, target, index + 1); // Recursive call with next index
}

int main() {
    std::vector<int> arr = {3, 1, 4, 1, 5, 9, 2, 6};
    int target = 5;
    int index = linearSearchRecursive(arr, target, 0); // Start searching from index 0
    if (index != -1) {
        std::cout << "Element " << target << " found at index " << index << std::endl;
    } else {
        std::cout << "Element " << target << " not found" << std::endl;
    }
    return 0;
}
