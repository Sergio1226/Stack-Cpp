#include <iostream>
#include "MyStack.h"

using String = std::string;
using namespace std;

int main() {
    MyStack<String> stack;
    stack.push("Hello");
    stack.push("World");
    cout<<stack.pop() << endl;
    cout<<stack.peek() << endl;
    return 0;
}
