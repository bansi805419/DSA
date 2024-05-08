// Develop a program to find the majority element in an array.

#include <iostream>
#include <vector>
#include <unordered_map>

int majorityElement(std::vector<int>& nums) {
    std::unordered_map<int, int> count;
    int n = nums.size();
    for (int num : nums) {
        if (++count[num] > n / 2)
            return num;
    }
    return -1; // No majority element found
}

int main() {
    std::vector<int> nums = {2, 2, 1, 1, 1, 2, 2};
    std::cout << "Majority element: " << majorityElement(nums) << std::endl;
    return 0;
}
