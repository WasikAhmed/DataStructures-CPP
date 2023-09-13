#include "Stack.h"
#include <iostream>
using namespace std;

int main() {

    Stack stack(5);

    stack.push(1);
    stack.push(2);
    stack.push(3);
    stack.push(4);
    stack.push(5);
    stack.push(6);
    stack.show();

    stack.pop();
    stack.pop();
    stack.show();

    return 0;
}