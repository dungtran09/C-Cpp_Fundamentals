/*
 * Data structure - double linked list
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

    return ptr;

}

// add node at end 
struct node *add_node_to_end(struct node *head, int d) {
    // new node
    struct node *ptr = (struct node*)malloc(sizeof(struct node));
    ptr->prev = NULL;
    ptr->data = d;
    ptr->next = NULL;

    // temporary pointer to trarverse nodes
    struct node *temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = ptr;
    ptr->prev = temp;
    
    return ptr;

}

// print node 
void print(struct node *head) {
    if (head == NULL) {
        printf("The double linked list is empty.\n");
        exit(1);
    }

    struct node *ptr = head;
    while (ptr != NULL) {
        printf("%d ", ptr->data);
        ptr = ptr->next;
    }
    printf("\n");
}

int main () {
    
    // create first node
    struct node *head = (struct node*)malloc(sizeof(struct node));
    head = add_node_to_empty(head, 100);
     
    
    // print node 
    struct node *ptr = head;
    ptr = add_node_to_end(ptr, 200);
    ptr = add_node_to_end(ptr, 300);
    ptr = add_node_to_end(ptr, 400);
    ptr = add_node_to_end(ptr, 500);

    ptr = head;
    print(ptr);


    return 0;
}
