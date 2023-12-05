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
    if(head == NULL) return false;

    if(head->data == data) {
        Node* tempNode = head;
        head = head->next;
        delete tempNode;
        return true;
    }

    Node* currNode = head;
    while (currNode->next != NULL) {
        if(currNode->next->data == data) {
            Node* tempNode = currNode->next;
            currNode->next = currNode->next->next;
            delete tempNode;
            return true;
        }
        currNode = currNode->next;
    }
    return false;
}
bool SinglyLinkedList::search(int data) {
    Node* currNode = head;
    while(currNode != NULL) {
        if(currNode->data == data) return true;
        currNode = currNode->next;
    }
    return false;
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
    list.insertAtBegining(10);
    list.insertAtBegining(20);
    list.insertAtBegining(30);
    list.printList();

    list.insertAtEnd(40);
    list.insertAtEnd(50);
    list.insertAtEnd(60);
    list.insertAfter(30, 70);
    list.insertAfter(10, 80);
    list.printList();
    list.deleteNode(20);
    list.printList();
    cout<< list.search(30)<< endl;

    return 0;
}