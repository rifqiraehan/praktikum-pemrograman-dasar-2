#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node *next;
};

void push(struct Node **head_ref, int new_data){
    struct Node *new_node = (struct Node*)malloc(sizeof(struct Node));
    new_node->data = new_data;
    new_node->next = (*head_ref);
    (*head_ref) = new_node;
}

void insertAfter(struct Node *prev_node, int new_data){
    if(prev_node == NULL){
        printf("The given previous node cannot be NULL");
        return;
    }

    struct Node *new_node = (struct Node*)malloc(sizeof(struct Node));
    new_node->data = new_data;
    new_node->next = prev_node->next;
    prev_node->next = new_node;
}

void append(struct Node **head_ref, int new_data){
    struct Node *new_node = (struct Node*)malloc(sizeof(struct Node));
    struct Node *last = *head_ref;
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

void deleteNode(struct Node **head_ref, int key){
    struct Node *temp = *head_ref, *prev;

    if(temp != NULL && temp->data == key){
        *head_ref = temp->next;
        free(temp);
        return;
    }

    while(temp != NULL && temp->data != key){
        prev = temp;
        temp = temp->next;
    }

    if(temp == NULL) return;

    prev->next = temp->next;
    free(temp);
}

void printList(struct Node *n){
    while(n != NULL){
        printf("%d ", n->data);
        n = n->next;
    }
}

int main(){
    struct Node *head = NULL;

    push(&head, 7);
    push(&head, 1);
    push(&head, 3);
    push(&head, 2);

    push(&head, 8);
    push(&head, 9);
    insertAfter(head->next, 10);
    append(&head, 11);
    insertAfter(head->next->next, 12);

    puts("Created Linked List: ");
    printList(head);

    deleteNode(&head, 1);

    deleteNode(&head, 8);
    deleteNode(&head, 10);
    deleteNode(&head, 12);
    
    puts("\nLinked List after Deletion of 1: ");
    printList(head);

    return 0;
}