// Write a program to evaluate a postfix expression.

#include <iostream>
#include <stack>
#include <string>

bool isOperator(char c) {
    return (c == '+' || c == '-' || c == '*' || c == '/');
}

int evaluatePostfix(const std::string& expression) {
    std::stack<int> operandStack;

    for (char c : expression) {
        if (isdigit(c)) {
            operandStack.push(c - '0');
        } else if (isOperator(c)) {
            int operand2 = operandStack.top();
            operandStack.pop();
            int operand1 = operandStack.top();
            operandStack.pop();

            switch (c) {
                case '+':
                    operandStack.push(operand1 + operand2);
                    break;
                case '-':
                    operandStack.push(operand1 - operand2);
                    break;
                case '*':
                    operandStack.push(operand1 * operand2);
                    break;
                case '/':
                    operandStack.push(operand1 / operand2);
                    break;
            }
        }
    }

    return operandStack.top();
}

int main() {
    std::string postfixExpr = "23+45-*";
    std::cout << "Postfix expression: " << postfixExpr << std::endl;
    std::cout << "Result: " << evaluatePostfix(postfixExpr) << std::endl;

    return 0;
}
