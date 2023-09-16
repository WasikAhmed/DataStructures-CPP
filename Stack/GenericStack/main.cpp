#include "Stack.cpp"
#include <iostream>
using namespace std;

int main() {

    // integer stack
    Stack<int> intStack;
    intStack.push(1);
    intStack.push(2);
    intStack.push(3);
    intStack.push(4);
    intStack.pop();
    intStack.show();

    // double stack
    Stack<double> doubleStack;
    doubleStack.push(1.1);
    doubleStack.push(2.2);
    doubleStack.push(3.3);
    doubleStack.push(4.4);
    cout<< doubleStack.top() << endl;

    // string stack
    Stack<string> stringStack;
    stringStack.push("one");
    stringStack.push("two");
    stringStack.push("three");
    cout<< stringStack.top()<< endl;
    stringStack.show();

    return 0;
}