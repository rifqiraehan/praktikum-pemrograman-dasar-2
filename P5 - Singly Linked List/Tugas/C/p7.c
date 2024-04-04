#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

struct Node{
    int key;
    struct Node *next;
};

void push(struct Node **head_ref, int new_key){
    struct Node *new_node = (struct Node *)malloc(sizeof(struct Node));
    new_node->key = new_key;
    new_node->next = *head_ref;
    *head_ref = new_node;
}

bool search(struct Node *head, int x){
    if(head == NULL){
        return false;
    }

    if(head->key == x){
        return true;
    }

    return search(head->next, x);
}

int main(){
    struct Node *head = NULL;
    int x = 21;

    push(&head, 10);
    push(&head, 30);
    push(&head, 11);
    push(&head, 21);
    push(&head, 14);

    search(head, x) ? printf("Yes\n") : printf("No\n");

    search(head, 4) ? printf("Yes\n") : printf("No\n");
    search(head, 52) ? printf("Yes\n") : printf("No\n");
    search(head, 32) ? printf("Yes\n") : printf("No\n");
    search(head, 10) ? printf("Yes\n") : printf("No\n");
    search(head, 14) ? printf("Yes\n") : printf("No\n");

    return 0;
}