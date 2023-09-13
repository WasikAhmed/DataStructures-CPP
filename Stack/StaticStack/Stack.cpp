#include "Stack.h"
#include <iostream>
using namespace std;

Stack::Stack(int size) {
    MaxSize = size;
    stk = new int[MaxSize];
    Top = -1;
}

Stack::~Stack() {
    delete[] stk;
}

bool Stack::isEmpty() {
    return Top == -1;
}

bool Stack::isFull() {
    return Top == MaxSize-1;
}

bool Stack::push(int element) {
    if(!isFull()) {
        stk[++Top] = element;
        return true;
    }
    return false;
}

bool Stack::pop() {
    if(!isEmpty()) {
        Top--;
        return true;
    }
    return false;
}

void Stack::show() {
    if(!isEmpty()) {
        for(int i=Top; i>-1; i--) {
            cout<< stk[i] << " ";
        }
        cout<< endl;
    }
}