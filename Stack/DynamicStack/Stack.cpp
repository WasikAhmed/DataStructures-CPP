#include "Stack.h"
#include <iostream>
using namespace std;

Stack::Stack() {
    MaxSize = 5;
    stack = new int[MaxSize];
    Top = -1;
}

Stack::~Stack() {
    delete[] stack;
}

bool Stack::isEmpty() {
    return Top == -1;
}

bool Stack::isFull() {
    return Top == MaxSize-1;
}

bool Stack::push(int element) {
    if(!isFull()) {
        stack[++Top] = element;
        return true;
    }
    resize();
    stack[++Top] = element;
    return true;
}

bool Stack::pop() {
    if(!isEmpty()) {
        Top--;
        return true;
    }
    return false;
}

int Stack::top() {
    if(!isEmpty()) {
        return stack[Top];
    }
    return -1;
}

void Stack::show() {
    if(!isEmpty()) {
        for(int i=Top; i>-1; i--) {
            cout<< stack[i] << " ";
        }
        cout<< endl;
    }
}

void Stack::resize() {
    int *temp = new int[MaxSize*2];
    for(int i=0; i<MaxSize; i++) {
        temp[i] = stack[i];
    }
    delete[] stack;
    stack = temp;
    MaxSize *= 2;
}