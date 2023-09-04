/*
 * C program data structure Single linked list
 * */

#include <stdio.h>
#include <stdlib.h>

// Single linked list
struct node {
    int data;
    struct node *link;
};

// add node at end
struct node* add_node_at_end(struct node *ptr, int d) {
    struct node *new = (struct node*)malloc(sizeof(struct node));
    new->data = d;
    new->link = NULL;
    
    ptr->link = new;

    return new;
}

// print node
void print_nodes(struct node *ptr) {
    struct node *temp = NULL;
    
    // check whether linked is empty or not
    if (ptr == NULL) {
        printf("The linked list is empty.\n");
        exit(0);
    }
    temp = ptr;

    // print nodes until linked list NULL
    while (temp != NULL) {
        printf("%d ", temp->data);
        // update next node
        temp = temp->link;
    }

    printf("\n");

}

int main () {
    
    // creat first node for linked list
    struct node *head = (struct node*)malloc(sizeof(struct node));
    head->data = 56;
    head->link = NULL;

    // create next nodes for linked list. using function
    struct node *ptr = head;
    ptr = add_node_at_end(ptr, 63);
    ptr = add_node_at_end(ptr, 58);
    ptr = add_node_at_end(ptr, 24);
    
    // update ptr to head node.
    ptr = head;

    // print nodes
    print_nodes(ptr);

    return 0;
}
