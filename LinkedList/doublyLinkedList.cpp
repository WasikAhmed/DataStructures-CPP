#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node* next;
    Node* prev;
    Node(int value) : data(value), next(nullptr), prev(nullptr) {}
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
        void reverse();
        void printList();
};
DoublyLinkedList::DoublyLinkedList() {
    head = NULL;
}
bool DoublyLinkedList::insertAtEnd(int data) {
    if(head == NULL) {
        head = new Node(data);
        return true;
    }
    Node* newNode = new Node(data);
    Node* currNode = head;
    while(currNode->next != NULL) {
        currNode = currNode->next;
    }
    currNode->next = newNode;
    newNode->prev = currNode;
    return true;
}
void DoublyLinkedList::printList() {
    Node* currNode = head;
    while (currNode != NULL)
    {
        cout<< currNode->data<< " ";
        currNode = currNode->next;
    }
    cout<< endl;
}

int main() {

    DoublyLinkedList list;
    list.insertAtEnd(10);
    list.insertAtEnd(20);
    list.insertAtEnd(30);

    list.printList();


    return 0;
}