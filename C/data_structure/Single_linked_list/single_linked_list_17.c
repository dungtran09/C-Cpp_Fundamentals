/*
 * C program create a linked list , and reverse all node 
 * */

#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *link;
};

// add node at first
struct node *add_node_at_first(struct node *head, int d) {
    
    struct node *temp = (struct node*)malloc(sizeof(struct node));
    temp->data = d;
    temp->link = NULL;
    
    temp->link = head;
    head = temp;

    return head;
}

// reverse nodes 
struct node *reverse_nodes(struct node *head) {
    struct node *prev = NULL;
    struct node *next = NULL;

    while (head != NULL) {
        next = head->link;
        head->link = prev;
        prev = head;
        head = next;
    }
    head = prev;
    return head;
}

// print node 
void print_nodes(struct node *head) {
    if (head == NULL) {
        printf("The linked list already empty, exiting.\n");
        exit(1);
    }
    struct node *ptr = head;
    // print nodes
    while (ptr != NULL) {
        printf("%d ", ptr->data);
        ptr = ptr->link;
    }  
    printf("\n");
}

int main () {
    
    // create first node
    struct node *head = (struct node*)malloc(sizeof(struct node));
    head->data = 5000;
    head->link = NULL;

    // add node at first
    head = add_node_at_first(head, 4000);
    head = add_node_at_first(head, 3000);
    head = add_node_at_first(head, 2000);
    head = add_node_at_first(head, 1000);
    
    // print node
    struct node *ptr = head;
    print_nodes(ptr);
    
    // reverse nodes
    head = reverse_nodes(head);
    
    ptr = head;
    print_nodes(ptr);

    return 0;
}
