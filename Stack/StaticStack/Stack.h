#ifndef STACK_H
#define STACK_H

class Stack {
private:
    int *stk, MaxSize, Top;

public:
    Stack(int);
    ~Stack();
    bool isEmpty();
    bool isFull();
    bool push(int);
    bool pop();
    void show();
};

#endif // Stack_H