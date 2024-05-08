// Develop a program to find the minimum subarray length whose sum is greater than or equal to a given target.

#include <iostream>
#include <vector>

int minSubArrayLen(int target, std::vector<int>& nums) {
    int minLength = INT_MAX;
    int sum = 0;
    int left = 0;
    for (int right = 0; right < nums.size(); ++right) {
        sum += nums[right];
        while (sum >= target) {
            minLength = std::min(minLength, right - left + 1);
            sum -= nums[left++];
        }
    }
    return (minLength != INT_MAX) ? minLength : 0;
}

int main() {
    std::vector<int> nums = {2, 3, 1, 2, 4, 3};
    int target = 7;
    std::cout << "Minimum subarray length: " << minSubArrayLen(target, nums) << std::endl;
    return 0;
}
