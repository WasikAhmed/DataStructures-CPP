#ifndef STACK_H
#define STACK_H

class Stack {
private:
    int *stack, MaxSize, Top;
public:
    Stack();
    ~Stack();
    bool isEmpty();
    bool isFull();
    bool push(int);
    bool pop();
    int top();
    void show();
    void resize();
};

#endif // STACK_H