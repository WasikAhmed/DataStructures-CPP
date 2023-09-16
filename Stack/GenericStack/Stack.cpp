#include "Stack.h"
#include <iostream>
#include <stdexcept>  // Include for std::runtime_error
using namespace std;

template <typename T>
Stack<T>::Stack(int initialCapacity) : Capacity(initialCapacity), Top(-1) {
    stack = new T[Capacity];
}

template <typename T>
Stack<T>::~Stack() {
    delete[] stack;
}

template <typename T>
bool Stack<T>::isEmpty() {
    return Top == -1;
}

template <typename T>
bool Stack<T>::isFull() {
    return Top == Capacity - 1;
}

template <typename T>
bool Stack<T>::push(const T& element) {
    if (isFull()) {
        resize(Capacity * 2);
    }
    stack[++Top] = element;
    return true;
}

template <typename T>
bool Stack<T>::pop() {
    if (!isEmpty()) {
        Top--;
        return true;
    }
    return false;
}

template <typename T>
T& Stack<T>::top() {
    if (!isEmpty()) {
        return stack[Top];
    }
    throw runtime_error("Stack is empty!");
}

template <typename T>
void Stack<T>::show() {
    for (int i = Top; i > -1; i--) {
        cout << stack[i] << " ";
    }
    cout << endl;
}

template <typename T>
void Stack<T>::resize(int newCapacity) {
    T* tempStack = new T[newCapacity];
    for (int i = 0; i <= Top; i++) {
        tempStack[i] = stack[i];
    }
    Capacity = newCapacity;
    delete[] stack;
    stack = tempStack;
}
