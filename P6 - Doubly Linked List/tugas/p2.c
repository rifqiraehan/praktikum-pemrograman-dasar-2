#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node *next;
    struct Node *prev;
};

void deleteNode(struct Node **head_ref, struct Node *del){
    if(*head_ref == NULL || del == NULL){
        return;
    }

    if(*head_ref == del){
        *head_ref = del->next;
    }

    if(del->next != NULL){
        del->next->prev = del->prev;
    }

    if(del->prev != NULL){
        del->prev->next = del->next;
    }

    free(del);
    return;
}

void push(struct Node **head_ref, int new_data){
    struct Node *new_node = (struct Node *)malloc(sizeof(struct Node));
    new_node->data = new_data;
    new_node->prev = NULL;
    new_node->next = (*head_ref);

    if((*head_ref) != NULL){
        (*head_ref)->prev = new_node;
    }

    (*head_ref) = new_node;
}

void append(struct Node **head_ref, int new_data){
    struct Node *new_node = (struct Node *)malloc(sizeof(struct Node));
    struct Node *last = *head_ref;
    new_node->data = new_data;
    new_node->next = NULL;

    if(*head_ref == NULL){
        new_node->prev = NULL;
        *head_ref = new_node;
        return;
    }

    while(last->next != NULL){
        last = last->next;
    }

    last->next = new_node;
    new_node->prev = last;
}

void insertAfter(struct Node *prev_node, int new_data){
    if(prev_node == NULL){
        printf("the given previous node cannot be NULL");
        return;
    }

    struct Node *new_node = (struct Node *)malloc(sizeof(struct Node));
    new_node->data = new_data;
    new_node->next = prev_node->next;
    prev_node->next = new_node;
    new_node->prev = prev_node;

    if(new_node->next != NULL){
        new_node->next->prev = new_node;
    }
}

void printList(struct Node *node){
    while(node != NULL){
        printf("%d ", node->data);
        node = node->next;
    }
}

int main(){
    struct Node *head = NULL;

    push(&head, 2);
    push(&head, 4);
    push(&head, 8);
    push(&head, 10);

    // add 10 data in various ways with different number
    append(&head, 12);
    push(&head, 14);
    push(&head, 16);
    append(&head, 18);
    insertAfter(head->next, 20);
    append(&head, 22);
    insertAfter(head->next->next, 24);
    push(&head, 26);
    append(&head, 28);
    push(&head, 20);



    printf("Original Linked list: ");
    printList(head);

    deleteNode(&head, head);
    deleteNode(&head, head->next);
    deleteNode(&head, head->next);

    // delete 3 new data
    deleteNode(&head, head->next->next);
    deleteNode(&head, head->next->next->next);
    deleteNode(&head, head->next->next->next->next);

    printf("\nModified Linked list: ");
    printList(head);

    getchar();

    return 0;
}