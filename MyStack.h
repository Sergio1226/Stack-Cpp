#include "Node.h"
#include <string>
template <typename T>
class MyStack {
private:
    Node<T>* head;
public:
    MyStack() {
        head = nullptr;
    }

    void push(T data) {
        Node<T>* newNode = new Node<T>(data);
        newNode->setNext(head);
        head = newNode;
    }

    T pop() {
        if (head == nullptr)
            return nullptr;
        T val = head->getData();
        Node<T>* temp = head;
        head = head->getNext();
        delete temp;
        return val;
    }

    T peek() {
        return (head == nullptr) ? nullptr : head->getData();
    }

    bool isEmpty() {
        return head == nullptr;
    }

    std::string toString() {
        return (head == nullptr) ? "" : head->toString();
    }
};
