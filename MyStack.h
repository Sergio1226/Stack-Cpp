#pragma once
#include "Node.h"
#include <string>

class MyStack {
private:
    Node* head;
public:
    MyStack() {
        head = nullptr;
    }

    void push(int data) {
        Node* newNode = new Node(data);
        newNode->setNext(head);
        head = newNode;
    }

    int pop() {
        if (head == nullptr)
            return -1;
        int val = head->getData();
        Node* temp = head;
        head = head->getNext();
        delete temp;
        return val;
    }

    int peek() {
        return (head == nullptr) ? -1 : head->getData();
    }

    bool isEmpty() {
        return head == nullptr;
    }

    std::string toString() {
        return (head == nullptr) ? "" : head->toString();
    }
};
