// Implement a stack using arrays.

#include <iostream>

class Stack {
private:
    static const int MAX_SIZE = 100;
    int arr[MAX_SIZE];
    int top;

public:
    Stack() : top(-1) {}

    bool isEmpty() {
        return top == -1;
    }

    bool isFull() {
        return top == MAX_SIZE - 1;
    }

    void push(int value) {
        if (!isFull()) {
            arr[++top] = value;
            std::cout << "Pushed " << value << " onto the stack." << std::endl;
        } else {
            std::cout << "Stack overflow! Cannot push " << value << " onto the stack." << std::endl;
        }
    }

    int pop() {
        if (!isEmpty()) {
            std::cout << "Popped " << arr[top] << " from the stack." << std::endl;
            return arr[top--];
        } else {
            std::cout << "Stack underflow! Cannot pop from an empty stack." << std::endl;
            return -1;
        }
    }

    int peek() {
        if (!isEmpty()) {
            return arr[top];
        } else {
            std::cout << "Stack is empty. Cannot peek." << std::endl;
            return -1;
        }
    }
};

int main() {
    Stack stack;

    stack.push(5);
    stack.push(10);
    stack.push(15);

    std::cout << "Top element of the stack: " << stack.peek() << std::endl;

    stack.pop();
    stack.pop();
    stack.pop();
    stack.pop();

    return 0;
}
