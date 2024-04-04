#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>

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

    clock_t start, end;
    double cpu_time_used;

    start = clock();

    search(head, x) ? printf("Yes\n") : printf("No\n");

    search(head, 4) ? printf("Yes\n") : printf("No\n");
    search(head, 52) ? printf("Yes\n") : printf("No\n");
    search(head, 32) ? printf("Yes\n") : printf("No\n");
    search(head, 10) ? printf("Yes\n") : printf("No\n");
    search(head, 14) ? printf("Yes\n") : printf("No\n");

    end = clock();
    cpu_time_used = ((double)(end - start)) / CLOCKS_PER_SEC;

    double duration_ms = cpu_time_used * 1000;

    printf("\nDuration:  %f seconds = %f milliseconds\n", cpu_time_used, duration_ms);

    return 0;
}