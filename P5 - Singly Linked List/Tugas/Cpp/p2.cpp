#include <iostream>

using namespace std;

class Node{
    public:
        int data;
        Node* next;
};

void printList(Node* n){
    while(n != NULL){
        cout << n->data << " " << n << " " << endl;
        n = n->next;
    }
}

int main(){
    Node* head = NULL;
    Node* second = NULL;
    Node* third = NULL;

    Node* fourth = NULL;
    Node* fifth = NULL;
    Node* sixth = NULL;
    Node* seventh = NULL;

    head = new Node();
    second = new Node();
    third = new Node();

    fourth = new Node();
    fifth = new Node();
    sixth = new Node();
    seventh = new Node();

    head->data = 1;
    head->next = second;

    second->data = 2;
    second->next = third;

    third->data = 3;
    third->next = fourth;

    fourth->data = 4;
    fourth->next = fifth;

    fifth->data = 5;
    fifth->next = sixth;

    sixth->data = 6;
    sixth->next = seventh;

    seventh->data = 7;
    seventh->next = NULL;

    printList(head);

    return 0;
}