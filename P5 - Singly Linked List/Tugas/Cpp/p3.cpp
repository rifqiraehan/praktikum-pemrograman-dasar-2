#include <iostream>

using namespace std;

class Node{
    public:
        int data;
        Node* next;
};

void push(Node** head_ref, int new_data){
    Node* new_node = new Node();
    new_node->data = new_data;
    new_node->next = (*head_ref);
    (*head_ref) = new_node;
}

void insertAfter(Node* prev_node, int new_data){
    if(prev_node == NULL){
        cout << "The given previous node cannot be NULL";
        return;
    }

    Node* new_node = new Node();
    new_node->data = new_data;
    new_node->next = prev_node->next;
    prev_node->next = new_node;
}

void append(Node** head_ref, int new_data){
    Node* new_node = new Node();
    Node* last = *head_ref;
    new_node->data = new_data;
    new_node->next = NULL;

    if(*head_ref == NULL){
        *head_ref = new_node;
        return;
    }

    while(last->next != NULL){
        last = last->next;
    }

    last->next = new_node;
    return;
}

void printList(Node* n){
    while(n != NULL){
        cout << n->data << " " << n << " " << endl;
        n = n->next;
    }
}

int main(){
    Node* head = NULL;

    append(&head, 6);
    push(&head, 7);
    push(&head, 1);
    append(&head, 4);
    insertAfter(head->next, 8);

    append(&head, 9);
    append(&head, 10);

    push(&head, 11);
    push(&head, 12);

    insertAfter(head->next, 13);
    insertAfter(head->next, 14);

    cout << "Created Linked list is: \n";
    printList(head);

    return 0;
}