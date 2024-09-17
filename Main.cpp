#include <iostream>
#include "MyStack.h"

int main() {
    MyStack stack;
    stack.push(1);
    stack.push(2);
    stack.pop();
    std::cout<<stack.toString() << std::endl;
    return 0;
}
