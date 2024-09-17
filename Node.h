#include <string>

class Node {
private:
    int data;
    Node* next;
public:
    Node(int data) {
        this->data = data;
        this->next = nullptr;
    }

    void setNext(Node* next) {
        this->next = next;
    }

    Node* getNext() {
        return this->next;
    }

    int getData() {
        return this->data;
    }

    void setData(int data) {
        this->data = data;
    }

    std::string toString() {
        std::string t = std::to_string(this->data);
        if (this->next != nullptr)
            t += "->" + this->next->toString();
        return t;
    }
};
