/*
 * C program Data structure - double linked list
 * Create a double linked list and reverse order nodes
 * */

#include <stdio.h>
#include <stdlib.h>

struct node {
    struct node *prev;
    int data;
    struct node *next;
};

// add node at empty
struct node *add_node_at_empty(struct node *head, int d) {
    struct node *ptr = (struct node*)malloc(sizeof(struct node));
    ptr->prev = NULL;
    ptr->data = d;
    ptr->next = NULL;

    head = ptr;

    return head;
}


// add node at end
struct node *add_node_at_end(struct node *head, int d) {
    struct node *ptr = (struct node*)malloc(sizeof(struct node));
    ptr->prev = NULL;
    ptr->data = d;
    ptr->next = NULL;
    
    struct node *temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = ptr;
    ptr->prev = temp;

    return head;
}

// reverse nodes order
struct node *reverse_nodes(struct node *head) {
    struct node *ptr1 = head;
    struct node *ptr2 = ptr1->next;

    ptr1->next = NULL;
    ptr1->prev = ptr2;

    while (ptr2 != NULL) {
        ptr2->prev = ptr2->next;
        ptr2->next = ptr1;
        ptr1 = ptr2;
        ptr2 = ptr2->prev;
    }

    head = ptr1;

    return head;
}

// print nodes
void print_nodes(struct node *head) {
    struct node *temp = head;

    if (head == NULL) {
        printf("Thed linked list is empty, exiting!\n");
        exit(1);
    }

    // print 
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

int main () {
    // create first node.
    struct node *head = NULL;
    head = add_node_at_empty(head, 350);
    
    // add more nodes at end
    head = add_node_at_end(head, 450);
    head = add_node_at_end(head, 550);
    head = add_node_at_end(head, 650);
    head = add_node_at_end(head, 750);

    struct node *ptr = head;
    print_nodes(ptr);

    // reverse nodes order 
    head = reverse_nodes(head);

    ptr = head;
    print_nodes(head);

    return 0;
}
