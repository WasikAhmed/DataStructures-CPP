#ifndef STACK_H
#define STACK_H

template <typename T>
class Stack {
private:
    T* stack;
    int Capacity, Top;

public:
    Stack(int initialCapacity = 10);
    ~Stack();
    bool isEmpty();
    bool isFull();
    bool push(const T& element);
    bool pop();
    T& top();
    void show();
    void resize(int);
};

#endif // STACK_H
