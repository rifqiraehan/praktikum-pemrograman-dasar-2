#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
    struct Node* prev;
};

void push(struct Node** head_ref, int new_data){
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));

    new_node->data = new_data;
    new_node->next = (*head_ref);
    new_node->prev = NULL;

    if((*head_ref) != NULL){
        (*head_ref)->prev = new_node;
    }

    (*head_ref) = new_node;
}

void insertAfter(struct Node* prev_node, int new_data) {
    if (prev_node == NULL) {
        printf("the given previous node cannot be NULL");
        return;
    }

    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));

    new_node->data = new_data;
    new_node->next = prev_node->next;
    prev_node->next = new_node;
    new_node->prev = prev_node;

    if (new_node->next != NULL) {
        new_node->next->prev = new_node;
    }
}

void append(struct Node** head_ref, int new_data) {
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
    struct Node* last = *head_ref;

    new_node->data = new_data;
    new_node->next = NULL;

    if (*head_ref == NULL) {
        new_node->prev = NULL;
        *head_ref = new_node;
        return;
    }

    while (last->next != NULL) {
        last = last->next;
    }

    last->next = new_node;
    new_node->prev = last;

    return;
}

void printList(struct Node* node) {
    struct Node* last;
    printf("\nTraversal in forward direction\n");
    while (node != NULL) {
        printf(" %d ", node->data);
        last = node;
        node = node->next;
    }
    printf("\n");

    printf("\nTraversal in reverse direction\n");
    while (last != NULL) {
        printf(" %d ", last->data);
        last = last->prev;
    }
    printf("\n");
}

// menambahkan fungsi untuk mencetak alamat memori dari setiap node
void printMemoryAddress(struct Node* node) {
    struct Node* last;
    printf("\nTraversal of memory address in forward direction\n");
    while (node != NULL) {
        printf(" %p ", node);
        last = node;
        node = node->next;
    }
    printf("\n");

    printf("\nTraversal of memory address in reverse direction\n");
    while (last != NULL) {
        printf(" %p ", last);
        last = last->prev;
    }
    printf("\n");
}

int main(){
    struct Node* head = NULL;

    append(&head, 6);
    push(&head, 7);
    push(&head, 1);
    append(&head, 4);
    insertAfter(head->next, 8);

    // menambahkan node baru
    insertAfter(head->next->next, 10);
    insertAfter(head->next->next->next, 11);
    append(&head, 12);
    push(&head, 15);

    printf("Created DLL is: ");
    printList(head);

    // menampilkan alamat memori dari setiap node
    printMemoryAddress(head);

    return 0;
}