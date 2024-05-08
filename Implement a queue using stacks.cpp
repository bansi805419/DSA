// Implement a queue using stacks.

#include <iostream>
#include <stack>

class Queue {
private:
    std::stack<int> inbox;
    std::stack<int> outbox;

public:
    void enqueue(int value) {
        inbox.push(value);
    }

    int dequeue() {
        if (outbox.empty()) {
            if (inbox.empty()) {
                std::cerr << "Queue is empty." << std::endl;
                return -1; // Assuming -1 denotes an error value
            }
            while (!inbox.empty()) {
                outbox.push(inbox.top());
                inbox.pop();
            }
        }
        int frontValue = outbox.top();
        outbox.pop();
        return frontValue;
    }

    bool isEmpty() {
        return inbox.empty() && outbox.empty();
    }
};

int main() {
    Queue q;
    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);

    std::cout << "Dequeued element: " << q.dequeue() << std::endl;
    std::cout << "Dequeued element: " << q.dequeue() << std::endl;

    q.enqueue(4);
    q.enqueue(5);

    while (!q.isEmpty()) {
        std::cout << "Dequeued element: " << q.dequeue() << std::endl;
    }

    return 0;
}
