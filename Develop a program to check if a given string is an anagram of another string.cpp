// Develop a program to check if a given string is an anagram of another string.

#include <iostream>
#include <string>
#include <algorithm>

bool isAnagram(const std::string& str1, const std::string& str2) {
    if (str1.length() != str2.length())
        return false;

    std::string sortedStr1 = str1;
    std::string sortedStr2 = str2;

    std::sort(sortedStr1.begin(), sortedStr1.end());
    std::sort(sortedStr2.begin(), sortedStr2.end());

    return sortedStr1 == sortedStr2;
}

int main() {
    std::string str1 = "listen";
    std::string str2 = "silent";

    std::cout << "Are \"" << str1 << "\" and \"" << str2 << "\" anagrams? " << (isAnagram(str1, str2) ? "Yes" : "No") << std::endl;
    return 0;
}
