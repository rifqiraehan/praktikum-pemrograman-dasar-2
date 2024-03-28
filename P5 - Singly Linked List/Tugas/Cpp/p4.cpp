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

void deleteNode(struct Node** head_ref, int position){
    if (*head_ref == NULL)
        return;

    struct Node* temp = *head_ref;
        if (position == 0){
            *head_ref = temp->next;
            free(temp);
            return;
        }

    for (int i=0; temp!=NULL && i<position-1; i++)
        temp = temp->next;
        if (temp == NULL || temp->next == NULL)
            return;

    struct Node *next = temp->next->next;
    free(temp->next);
    temp->next = next;
}

void printList(Node* n){
    while(n != NULL){
        cout << n->data << " ";
        n = n->next;
    }
}

int main(){
    Node* head = NULL;

    push(&head, 7);
    push(&head, 1);
    push(&head, 3);
    push(&head, 2);
    push(&head, 8);

    push(&head, 5);
    push(&head, 9);
    insertAfter(head->next, 10);
    append(&head, 11);
    insertAfter(head->next->next, 12);

    puts("Created Linked List: ");
    printList(head);

    deleteNode(&head, 4);

    puts("\nLinked List after Deletion at position 4: ");
    printList(head);

    deleteNode(&head, 3);
    puts("\nLinked List after Deletion at position 3: ");
    printList(head);

    deleteNode(&head, 2);
    puts("\nLinked List after Deletion at position 2: ");
    printList(head);

    deleteNode(&head, 1);
    puts("\nLinked List after Deletion at position 1: ");
    printList(head);

    return 0;
}