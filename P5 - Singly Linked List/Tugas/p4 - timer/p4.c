#include <stdio.h>
#include <stdlib.h>
#include <time.h>

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

    push(&head, 5);
    push(&head, 9);
    insertAfter(head->next, 10);
    append(&head, 11);
    insertAfter(head->next->next, 12);

    clock_t start, end;
    double cpu_time_used;

    start = clock();

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

    end = clock();
    cpu_time_used = ((double)(end - start)) / CLOCKS_PER_SEC;

    double duration_ms = cpu_time_used * 1000;
    
    printf("\n\nDuration:  %f seconds = %f milliseconds\n", cpu_time_used, duration_ms);

    return 0;
}