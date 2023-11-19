#include "Queue.h"
#include <iostream>
using namespace std;

int main() {

    Queue queue(5);

    queue.enqueue(10);
    queue.enqueue(20);
    queue.enqueue(30);
    cout<< queue.front()<< endl;
    cout<< queue.size()<< endl;
    queue.show();

    queue.dequeue();
    queue.dequeue();
    cout<< queue.front()<< endl;
    queue.show();

    

    return 0;
}