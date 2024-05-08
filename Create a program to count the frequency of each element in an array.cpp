// Create a program to count the frequency of each element in an array.

#include <iostream>
#include <vector>
#include <unordered_map>

std::unordered_map<int, int> countFrequency(const std::vector<int>& arr) {
    std::unordered_map<int, int> frequencyMap;
    for (int num : arr) {
        frequencyMap[num]++;
    }
    return frequencyMap;
}

int main() {
    std::vector<int> arr = {1, 2, 3, 4, 1, 2, 3, 1, 2, 1};
    std::unordered_map<int, int> frequencyMap = countFrequency(arr);

    std::cout << "Frequency of elements:" << std::endl;
    for (const auto& pair : frequencyMap) {
        std::cout << pair.first << ": " << pair.second << std::endl;
    }

    return 0;
}
