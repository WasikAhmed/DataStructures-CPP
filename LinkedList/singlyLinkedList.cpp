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
        bool insertAtBegining(int);
        bool insertAtEnd(int);
        bool insertAfter(int);
        bool deleteNode(int);
        bool search(int);
        void sort();
        void printList();
};

bool SinglyLinkedList::insertAtBegining(int data) {
    
}
bool SinglyLinkedList::insertAtEnd(int data) {

}
bool SinglyLinkedList::insertAfter(int data) {
    
}
bool SinglyLinkedList::deleteNode(int data) {
    
}
bool SinglyLinkedList::search(int data) {

}
void SinglyLinkedList::sort() {

}
void SinglyLinkedList::printList() {

}

int main()
{


    return 0;
}