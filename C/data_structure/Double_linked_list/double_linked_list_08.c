/*
 * C program create double linked and a func to del last node on linked list
 * */

#include <stdio.h>
#include <stdlib.h>

struct node {
    struct node *prev;
    int data;
    struct node *next;
};

// add node ad position empty
struct node *add_node_to_empty(struct node *head, int d) {
    struct node *ptr = (struct node*)malloc(sizeof(struct node));
    ptr->prev = NULL;
    ptr->data = d;
    ptr->next = NULL;
    
    head = ptr;

    return head;
}

// add node at end
struct node *add_node_to_end(struct node *head, int d) {
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

// del node at end
void del_node_at_end(struct node *head) {
    struct node *ptr1 = NULL;
    struct node *ptr2 = head;
    while (ptr2->next != NULL) {
        ptr2 = ptr2->next;
    }

    ptr1 = ptr2->prev;
    ptr1->next = NULL;
    free(ptr2);
    ptr2 = NULL;
}

// print node 
void print_nodes(struct node *head) {
    struct node *ptr = head;
    if (head == NULL) {
        printf("The linked list is empty.\n");
        exit(1);
    }

    while (ptr != NULL) {
        printf("%d ", ptr->data);
        ptr = ptr->next;
    }
    printf("\n");
}

int main() {
    
    // create node first node 
    struct node *head = NULL;
    head = add_node_to_empty(head, 45);
    
    // add node at end
    head = add_node_to_end(head, 55);
    head = add_node_to_end(head, 65);
    head = add_node_to_end(head, 75);
    // print
    struct node *ptr = head;
    print_nodes(ptr);
    
    del_node_at_end(head);

    print_nodes(head);

    return 0;
}
