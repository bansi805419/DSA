#include <iostream>
#include <stack>
#include <string>

int evaluatePostfix(const std::string& postfix) {
    std::stack<int> operands;

    for (char c : postfix) {
        if (isdigit(c)) {
            operands.push(c - '0');
        } else {
            int operand2 = operands.top();
            operands.pop();
            int operand1 = operands.top();
            operands.pop();

            switch (c) {
                case '+':
                    operands.push(operand1 + operand2);
                    break;
                case '-':
                    operands.push(operand1 - operand2);
                    break;
                case '*':
                    operands.push(operand1 * operand2);
                    break;
                case '/':
                    operands.push(operand1 / operand2);
                    break;
            }
        }
    }

    return operands.top();
}

int main() {
    std::string postfix = "23*5+";
    std::cout << "Result: " << evaluatePostfix(postfix) << std::endl;
    return 0;
}
