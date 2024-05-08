#include <iostream>
#include <stack>
#include <string>

bool checkParanthesis(const std::string& sequence) {
    std::stack<char> stack;
    for (char c : sequence) {
        if (c == '(' || c == '[' || c == '{') {
            stack.push(c);
        } else if (c == ')' || c == ']' || c == '}') {
            if (stack.empty()) {
                return false;
            }
            char top = stack.top();
            stack.pop();
            if ((c == ')' && top != '(') || (c == ']' && top != '[') || (c == '}' && top != '{')) {
                return false;
            }
        }
    }
    return stack.empty();
}

int main() {
    std::string sequence = "{[()]}";
    if (checkParanthesis(sequence)) {
        std::cout << "Paranthesis sequence is valid.\n";
    } else {
        std::cout << "Paranthesis sequence is invalid.\n";
    }
    return 0;
}
