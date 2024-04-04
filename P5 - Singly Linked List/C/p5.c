#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

struct Node{
    int data;
    struct Node *next;
};

void deleteList(struct Node **head_ref) {
    struct Node *current = *head_ref;
    struct Node *next;

    while (current != NULL) {
        next = current->next;
        free(current);
        current = next;
    }

    *head_ref = NULL;
}

void push(struct Node **head_ref, int new_data) {
    struct Node *new_node = (struct Node *)malloc(sizeof(struct Node));
    new_node->data = new_data;
    new_node->next = *head_ref;
    *head_ref = new_node;
}

int main(){
    struct Node *head = NULL;

    push(&head, 1);
    push(&head, 4);
    push(&head, 1);
    push(&head, 12);
    push(&head, 1);

    printf("Deleting linked list\n");
    deleteList(&head);

    printf("Linked list deleted\n");

    return 0;
}