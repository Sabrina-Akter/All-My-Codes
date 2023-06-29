#include <iostream>

class Node {
public:
    int data;
    Node* next;
};

class LinkedList {
public:
    Node* head;
    LinkedList() {
        head = nullptr;
    }
    void insertNode(int Data) {
        Node* newNode = new Node();
        newNode->data = Data;
        newNode->next = nullptr;
        if (head == nullptr) {
            head = newNode;
        }
        else {
            Node* currentNode = head;
            while (currentNode->next != nullptr) {
                currentNode = currentNode->next;
            }
            currentNode->next = newNode;
        }
    }
    void displayList() {
        Node* currentNode = head;
        while (currentNode != nullptr) {
            std::cout << currentNode->data << " ";
            currentNode = currentNode->next;
        }
        std::cout << std::endl;
    }
};

int main() {
    LinkedList list;
    list.insertNode(1);
    list.insertNode(2);
    list.insertNode(3);
    list.displayList();
    return 0;
}