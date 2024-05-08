// Write a program to find the maximum subarray sum.

#include <iostream>
#include <vector>
#include <algorithm>

int maxSubArraySum(std::vector<int>& nums) {
    int maxSum = nums[0];
    int currentSum = nums[0];
    for (int i = 1; i < nums.size(); ++i) {
        currentSum = std::max(nums[i], currentSum + nums[i]);
        maxSum = std::max(maxSum, currentSum);
    }
    return maxSum;
}

int main() {
    std::vector<int> nums = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    std::cout << "Maximum subarray sum: " << maxSubArraySum(nums) << std::endl;
    return 0;
}
