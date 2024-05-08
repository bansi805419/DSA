// Implement the binary search algorithm.

#include <iostream>
#include <vector>

int binarySearch(std::vector<int>& arr, int target) {
    int left = 0;
    int right = arr.size() - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == target)
            return mid;
        else if (arr[mid] < target)
            left = mid + 1;
        else
            right = mid - 1;
    }

    return -1;
}

int main() {
    std::vector<int> arr = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19};
    int target = 13;

    int index = binarySearch(arr, target);

    if (index != -1)
        std::cout << "Element " << target << " found at index " << index << std::endl;
    else
        std::cout << "Element " << target << " not found in the array." << std::endl;

    return 0;
}
