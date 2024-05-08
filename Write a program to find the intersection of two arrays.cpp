// Write a program to find the intersection of two arrays.

#include <iostream>
#include <vector>
#include <unordered_set>

std::vector<int> intersection(const std::vector<int>& nums1, const std::vector<int>& nums2) {
    std::unordered_set<int> set(nums1.begin(), nums1.end());
    std::vector<int> result;
    for (int num : nums2) {
        if (set.count(num)) {
            result.push_back(num);
            set.erase(num);
        }
    }
    return result;
}

int main() {
    std::vector<int> nums1 = {1, 2, 2, 1};
    std::vector<int> nums2 = {2, 2};

    std::vector<int> result = intersection(nums1, nums2);

    std::cout << "Intersection of the two arrays: ";
    for (int num : result) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
