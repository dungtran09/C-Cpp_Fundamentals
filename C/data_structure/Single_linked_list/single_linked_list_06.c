/*
 * C program
 * Data structute - Single linked list
 * */
#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *link;
};

// add node at end of linked list
void add_node_at_end(struct node *head , int d) {
    struct node *ptr, *temp;

    // ptr pointer head node 
    ptr = head;
    
    // create new node on heap memory
    temp = (struct node*)malloc(sizeof(struct node));
    temp->data = d;
    temp->link = NULL;

    // traveral linked list to end of the linked list using pointer 'ptr'
    while (ptr->link != NULL) {
        ptr = ptr->link;
    }

    // if ptr has point last node
    // update second last node to link last node.
    ptr->link = temp;

}

// print nodes
void print_nodes(struct node *head) {
    struct node *ptr = NULL;

    // check whether linked list is empty or not
    while (head == NULL) {
        printf("The linked is empty.\n");
        exit(0);
    }

    // if has linked list on the heap memory 
    // print node until linked list empty.
    ptr = head;
    while (ptr != NULL) {
        printf("%d ", ptr->data);
        ptr = ptr->link;
    }

    printf("\n");
}

int main() {

    // create first node
    struct node *head = (struct node*)malloc(sizeof(struct node));
    head->data = 20;
    head->link = NULL;

    // create second node
    struct node *current = (struct node*)malloc(sizeof(struct node));
    current->data = 30;
    current->link = NULL;

    // update head link to link secon node
    head->link = current;

    // create third node
    current = (struct node*)malloc(sizeof(struct node));
    current->data = 46;
    current->link = NULL;

    // update link of second node to link third node using head-link-link
    head->link->link = current;

    // func add node at end of linked list
    add_node_at_end(head, 12);
    
    // print nodes in linked list
    print_nodes(head);

    return 0;
}
