/*
 * C program data structure - double linked list
 * */

#include <stdio.h>
#include <stdlib.h>

struct node {
    struct node *prev;
    int data;
    struct node *next;
};

// add node at empty
struct node *add_node_to_empty(struct node *head, int d) {
    struct node *ptr = (struct node*)malloc(sizeof(struct node));
    ptr->prev = NULL;
    ptr->data = d;
    ptr->next = NULL;

    head = ptr;

    return head;
}

// add node at first
struct node *add_node_to_first(struct node *head, int d) {
    
    // create node
    struct node *temp = (struct node*)malloc(sizeof(struct node));
    temp->prev = NULL;
    temp->data = d;
    temp->next = NULL;

    temp->next = head;
    head->prev = temp;
    head = temp;

    return head;
}
// print nodes
void print(struct node* head) {
    
    if (head == NULL) {
        printf("The double linked is empty.\n");
        exit(1);
    }

    struct node *temp = head;
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

int main() {
    
    // create head node 
    struct node *head = (struct node*)malloc(sizeof(struct node));
    head = add_node_to_empty(head, 10);

    // print node
    struct node *ptr = head;
    print(ptr);
    
    // add node at first 
    head = add_node_to_first(head, 20);
    head = add_node_to_first(head, 30);
    head = add_node_to_first(head, 40);

    // print 
    ptr = head;
    print(ptr);

    return 0;
}
