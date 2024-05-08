// Develop an algorithm to find the maximum element in a stack.

#include <iostream>
#include <stack>

int getMaxElement(std::stack<int>& s) {
    if (s.empty()) {
        std::cerr << "Stack is empty." << std::endl;
        return -1; // Assuming -1 denotes an error value
    }

    int maxElement = s.top();
    std::stack<int> tempStack;

    while (!s.empty()) {
        maxElement = std::max(maxElement, s.top());
        tempStack.push(s.top());
        s.pop();
    }

    while (!tempStack.empty()) {
        s.push(tempStack.top());
        tempStack.pop();
    }

    return maxElement;
}

int main() {
    std::stack<int> s;
    s.push(3);
    s.push(7);
    s.push(2);
    s.push(10);
    s.push(5);

    std::cout << "Max element in the stack: " << getMaxElement(s) << std::endl;

    return 0;
}
