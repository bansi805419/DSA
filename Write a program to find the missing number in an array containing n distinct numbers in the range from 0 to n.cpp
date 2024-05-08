// Write a program to find the missing number in an array containing n distinct numbers in the range from 0 to n.

#include <iostream>
#include <vector>

int missingNumber(std::vector<int>& nums) {
    int n = nums.size();
    int expectedSum = n * (n + 1) / 2;
    int actualSum = 0;
    for (int num : nums) {
        actualSum += num;
    }
    return expectedSum - actualSum;
}

int main() {
    std::vector<int> nums = {3, 0, 1};
    std::cout << "Missing number: " << missingNumber(nums) << std::endl;
    return 0;
}
