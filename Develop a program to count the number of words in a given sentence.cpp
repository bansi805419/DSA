// Develop a program to count the number of words in a given sentence.

#include <iostream>
#include <string>
#include <sstream>

int countWords(const std::string& sentence) {
    std::istringstream iss(sentence);
    int count = 0;
    std::string word;
    while (iss >> word)
        count++;
    return count;
}

int main() {
    std::string sentence = "This is a sample sentence.";
    std::cout << "Number of words in the sentence: " << countWords(sentence) << std::endl;
    return 0;
}
