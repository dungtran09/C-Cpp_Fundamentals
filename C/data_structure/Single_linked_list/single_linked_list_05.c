/*
 * C program data struct Single linked list
 * */

#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *link;
};

// print node
void print_nodes(struct node *head) {
    struct node *ptr = NULL;
    ptr = head;

    // check whether linked list is empty or not
    if (head == NULL) {
        printf("The linked list is empty.\n");
        exit(0);
    }

    // print nodes in linked list until the linked list empty
    while (ptr != NULL) {
        printf("%d ", ptr->data);
        // update to the next node
        ptr = ptr->link;
    }

    printf("\n");
}

int main() {
    
    // create first node
    struct node *head = (struct node*)malloc(sizeof(struct node));
    head->data = 11;
    head->link = NULL;
    
    // create second node
    struct node* current = (struct node*)malloc(sizeof(struct node));
    current->data = 9;
    current->link = NULL;

    // update link head node to link second node
    head->link = current;

    // cread third node
    current = (struct node*)malloc(sizeof(struct node));
    current->data = 1996;
    current->link = NULL;

    // update link of second node to link third nodo using head->link->link
    head->link->link = current;

    // print nodes
    //
    print_nodes(head);

    return 0;
}
