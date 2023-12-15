#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node* next;
    Node* prev;

};

class DoublyLinkedList {
    private:
        Node* head;
    public:
        DoublyLinkedList();
        bool insertAtFront(int);
        bool insertAtEnd(int);
        bool insertAfter(int, int);
        bool insertBefore(int, int);
        bool deleteFront(int);
        bool deleteEnd(int);
        bool deleteNode(int);
        bool clear();
        bool search(int);
        void sort();
        void printList();
};

int main() {

    return 0;
}