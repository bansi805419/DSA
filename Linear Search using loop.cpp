#include <iostream>
#include <vector>

int linearSearch(const std::vector<int>& arr, int target) {
    for (int i = 0; i < arr.size(); ++i) {
        if (arr[i] == target) {
            return i; // Return index if found
        }
    }
    return -1; // Return -1 if not found
}

int main() {
    std::vector<int> arr = {3, 1, 4, 1, 5, 9, 2, 6};
    int target = 5;
    int index = linearSearch(arr, target);
    if (index != -1) {
        std::cout << "Element " << target << " found at index " << index << std::endl;
    } else {
        std::cout << "Element " << target << " not found" << std::endl;
    }
    return 0;
}
