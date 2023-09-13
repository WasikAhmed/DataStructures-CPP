#include "Stack.h"
#include <iostream>
using namespace std;

int main() {

    Stack stack;

    stack.push(1);
    stack.push(2);
    stack.push(3);
    stack.push(4);
    stack.push(5);
    stack.push(6);
    stack.show();
    cout<< stack.top() << endl;

    stack.pop();
    stack.pop();
    stack.show();
    cout<< stack.top() << endl;

    return 0;
}