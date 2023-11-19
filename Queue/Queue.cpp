#include "Queue.h"
#include <iostream>
using namespace std;

Queue::Queue(int capacity) {
    Capacity = capacity;
    queue = new int[Capacity];
    Front = Rear = -1;
    Size = 0;
}

Queue::~Queue() {
    delete[] queue;
}

bool Queue::isEmpty() {
    return Size == 0;
}

bool Queue::isFull() {
    return Size == Capacity;;
}

int Queue::size() {
    return Size;
}

bool Queue::enqueue(int value) {
    if (isFull()) {
        return false;
    }
    Rear = (Rear + 1) % Capacity;
    queue[Rear] = value;
    if (Front == -1) {
        Front = Rear; // Update Front if queue was empty
    }
    Size++;
    return true;
}


bool Queue::dequeue() {
    if(isEmpty()) {
        return false;
    }
    if (Size == 1) {
        Front = Rear = -1; // Reset queue pointers if only one element is present
    } else {
        Front = (Front + 1) % Capacity;
    }
    Size--;
    return true;
}

int Queue::front() {
    if(isEmpty()) {
        return -1;
    }
    return queue[Front];
}

void Queue::show() {
    if(isEmpty()) {
        return;
    }
    for(int i = Front; i<=Rear; i++) {
        cout<< queue[i]<< " ";
    }
    cout<< endl;
}



