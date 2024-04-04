#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node *next;
};

void push(struct Node **head_ref, int new_data){
    struct Node *new_node = (struct Node *)malloc(sizeof(struct Node));
    new_node->data = new_data;
    new_node->next = *head_ref;
    *head_ref = new_node;
}

int GetNth(struct Node *head, int n){
    int count = 0;
    if (head == NULL) {
        return 0;
    }

    if (count == n) {
        return head->data;
    }


    return GetNth(head->next, n - 1);
}

int main(){
    struct Node *head = NULL;

    push(&head, 1);
    push(&head, 4);
    push(&head, 1);
    push(&head, 12);
    push(&head, 1);

    printf("Element at index 3 is %d\n", GetNth(head, 3));

    printf("Element at index 4 is %d\n", GetNth(head, 4));
    printf("Element at index 5 is %d\n", GetNth(head, 5));
    printf("Element at index 6 is %d\n", GetNth(head, 6));


    return 0;
}