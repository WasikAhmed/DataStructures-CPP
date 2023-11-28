// a linear data structure that includes a series of connected nodes.
// each node stores data and the address of next node

#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node* next;
};

void printList(Node* head) {
    while(head != NULL) {
        cout<< head->data<< endl;
        head = head->next;
    }
}


int main()
{
    Node* head;
    Node* node1 = NULL;
    Node* node2 = NULL;
    Node* node3 = NULL;
    Node* node4 = NULL;
    Node* node5 = NULL;

    head = new Node();
    node1 = new Node();
    node2 = new Node();
    node3 = new Node();
    node4 = new Node();
    node5 = new Node();

    node1->data = 10;
    node2->data = 20;
    node3->data = 30;
    node4->data = 40;
    node5->data = 50;

    node1->next = node2;
    node2->next = node3;
    node3->next = node4;
    node4->next = node5;
    node5->next = NULL;

    head = node1;
    printList(head);

    return 0;
}