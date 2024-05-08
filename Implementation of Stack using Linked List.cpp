#include <iostream>

template <typename T>
class Node {
public:
    T data;
    Node<T>* next;

    Node(T data) {
        this->data = data;
        this->next = nullptr;
    }
};

template <typename T>
class Stack {
private:
    Node<T>* top;

public:
    Stack() {
        top = nullptr;
    }

    ~Stack() {
        while (!isEmpty()) {
            pop();
        }
    }

    void push(T data) {
        Node<T>* newNode = new Node<T>(data);
        newNode->next = top;
        top = newNode;
    }

    void pop() {
        if (isEmpty()) {
            std::cout << "Stack is empty. Cannot pop.\n";
            return;
        }
        Node<T>* temp = top;
        top = top->next;
        delete temp;
    }

    T peek() {
        if (isEmpty()) {
            std::cout << "Stack is empty. Cannot peek.\n";
            return T();
        }
        return top->data;
    }

    bool isEmpty() {
        return top == nullptr;
    }
};

int main() {
    Stack<int> stack;
    stack.push(1);
    stack.push(2);
    stack.push(3);

    std::cout << "Top element: " << stack.peek() << std::endl;

    stack.pop();
    std::cout << "Top element after pop: " << stack.peek() << std::endl;

    return 0;
}
