#include <string>

template <typename T>
class Node {
private:
    T data;
    Node<T>* next;
public:
    Node(T data) {
        this->data = data;
        this->next = nullptr;
    }

    void setNext(Node* next) {
        this->next = next;
    }

    Node* getNext() {
        return this->next;
    }

    T getData() {
        return this->data;
    }

    void setData(int data) {
        this->data = data;
    }
};
