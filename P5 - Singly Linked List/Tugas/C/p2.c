#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node *next;
};

void printList(struct Node *n){
    while(n != NULL){
        printf("%d %p \n", n->data, n);
        n = n->next;
    }
}

int main(){
    struct Node *head = NULL;
    struct Node *second = NULL;
    struct Node *third = NULL;

    struct Node *fourth = NULL;
    struct Node *fifth = NULL;
    struct Node *sixth = NULL;
    struct Node *seventh = NULL;

    head = (struct Node*)malloc(sizeof(struct Node));
    second = (struct Node*)malloc(sizeof(struct Node));
    third = (struct Node*)malloc(sizeof(struct Node));

    fourth = (struct Node*)malloc(sizeof(struct Node));
    fifth = (struct Node*)malloc(sizeof(struct Node));
    sixth = (struct Node*)malloc(sizeof(struct Node));
    seventh = (struct Node*)malloc(sizeof(struct Node));

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