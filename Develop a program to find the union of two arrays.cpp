// Develop a program to find the union of two arrays.

#include <iostream>
#include <vector>
#include <unordered_set>

std::vector<int> unionOfArrays(const std::vector<int>& nums1, const std::vector<int>& nums2) {
    std::unordered_set<int> set;
    for (int num : nums1) {
        set.insert(num);
    }
    for (int num : nums2) {
        set.insert(num);
    }
    return std::vector<int>(set.begin(), set.end());
}

int main() {
    std::vector<int> nums1 = {1, 2, 2, 1};
    std::vector<int> nums2 = {2, 2, 3};

    std::vector<int> result = unionOfArrays(nums1, nums2);

    std::cout << "Union of the two arrays: ";
    for (int num : result) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
