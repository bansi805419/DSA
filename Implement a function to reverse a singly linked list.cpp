// Implement a function to reverse a singly linked list.

#include <iostream>

struct Node {
    int data;
    Node* next;
};

Node* reverseLinkedList(Node* head) {
    Node *prev = nullptr, *current = head, *next = nullptr;
    while (current != nullptr) {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    return prev;
}

void printLinkedList(Node* head) {
    Node* temp = head;
    while (temp != nullptr) {
        std::cout << temp->data << " ";
        temp = temp->next;
    }
    std::cout << std::endl;
}

int main() {
    Node* head = new Node{1, nullptr};
    head->next = new Node{2, nullptr};
    head->next->next = new Node{3, nullptr};

    std::cout << "Original Linked List: ";
    printLinkedList(head);

    head = reverseLinkedList(head);

    std::cout << "Reversed Linked List: ";
    printLinkedList(head);

    return 0;
}
