#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

class SinglyLinkedList {
    private:
        Node* head;

    public:
        SinglyLinkedList();
        bool insertAtBegining(int);
        bool insertAtEnd(int);
        bool insertAfter(int, int);
        bool deleteNode(int);
        bool search(int);
        void sort();
        void printList();
};
Node* createNewNode(int data) {
    Node* newNode = new Node();
    newNode->data = data;
    newNode->next = NULL;
    
    return newNode;
}
SinglyLinkedList::SinglyLinkedList() {
    head = NULL;
}
bool SinglyLinkedList::insertAtBegining(int data) {
    Node* newNode = createNewNode(data);
    newNode->next = head;
    head = newNode;
    return true;
}
bool SinglyLinkedList::insertAtEnd(int data) {
    Node* newNode = createNewNode(data);
    if(head == NULL) {
        head = newNode;
        return true;
    }
    Node* currNode = head;
    while(currNode->next != NULL) {
        currNode = currNode->next;
    }
    currNode->next = newNode;
    return true;
}
bool SinglyLinkedList::insertAfter(int value, int data) {
    Node* prevNode = head;
    while(prevNode != NULL) {
        if(prevNode->data == value) {
            Node* newNode = createNewNode(data);
            newNode->next = prevNode->next;
            prevNode->next = newNode;
            return true;
            break;
        }
        prevNode = prevNode->next;
    }
    return false;
}
bool SinglyLinkedList::deleteNode(int data) {
    
}
bool SinglyLinkedList::search(int data) {

}
void SinglyLinkedList::sort() {

}
void SinglyLinkedList::printList() {
    Node* currNode = head;
    while (currNode != NULL) {
        cout<< currNode->data<< " ";
        currNode = currNode->next;
    }
    cout<< endl;
}

int main()
{
    SinglyLinkedList list;
    // list.printList();
    // list.insertAtBegining(10);
    // list.insertAtBegining(20);
    // list.printList();
    // list.insertAtBegining(50);
    // list.printList();

    list.insertAtEnd(10);
    list.insertAtEnd(20);
    list.insertAtEnd(30);
    list.insertAfter(30,40);
    list.insertAfter(10,50);
    list.printList();

    return 0;
}