#ifndef QUEUE_H
#define QUEUE_H

class Queue {
private:
    int *queue;
    int Capacity, Front, Rear, Size;

public:
    Queue(int);
    ~Queue();
    bool isEmpty();
    bool isFull();
    int size();
    bool enqueue(int);
    bool dequeue();
    int front();
    void show();
};

#endif // QUEUE_H