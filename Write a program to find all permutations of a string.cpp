// Write a program to find all permutations of a string.

#include <iostream>
#include <string>
#include <algorithm>

void permute(std::string str, int left, int right) {
    if (left == right) {
        std::cout << str << std::endl;
    } else {
        for (int i = left; i <= right; ++i) {
            std::swap(str[left], str[i]);
            permute(str, left + 1, right);
            std::swap(str[left], str[i]); // Backtrack
        }
    }
}

int main() {
    std::string str = "abc";
    permute(str, 0, str.length() - 1);
    return 0;
}
