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
        bool deleteFront();
        bool deleteEnd();
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
bool DoublyLinkedList::insertAtFront(int data) {
    Node* newNode = new Node(data);
    if(head == NULL) {
        head = newNode;
        return true;
    }
    newNode->next = head;
    head->prev = newNode;
    head = newNode;
    return true;
}
bool DoublyLinkedList::insertAfter(int value, int data) {
    Node* currNode = head;
    while (currNode != NULL) {
        if (currNode->data == value) {
            break; 
        }
        currNode = currNode->next; 
    }

    if (currNode != NULL) {
        Node* newNode = new Node(data);
        newNode->prev = currNode;
        newNode->next = currNode->next;

        if (currNode->next != NULL) {
            currNode->next->prev = newNode;
        }
        
        currNode->next = newNode;
        return true;
    }
    return false;
}
bool DoublyLinkedList::insertBefore(int value, int data) {
    Node* currNode = head;
    while(currNode != NULL) {
        if(currNode->data == value) {
            break;
        }
        currNode = currNode->next;
    }
    if(currNode != NULL) {
        Node* newNode = new Node(data);
        newNode->prev = currNode->prev;
        newNode->next = currNode;
        
        if (currNode->prev != NULL) {
            currNode->prev->next = newNode;
        } else {
            head = newNode;
        }
        
        currNode->prev = newNode;
        return true;
    }
    return false;
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
    list.insertAtFront(100);
    list.insertAtEnd(10);
    list.insertAtEnd(20);
    list.insertAtEnd(30);
    list.insertAtFront(50);
    list.insertAfter(100, 1000);
    list.insertAfter(30, 300);

    list.printList();



    return 0;
}