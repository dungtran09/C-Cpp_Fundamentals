/*
 * C program double linked list
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

    return ptr;
}


// add node at position
struct node *add_node_at_pos(struct node *head, int d, int pos) {
    
    struct node *ptr1 = head; 
    struct node *ptr2 = NULL;
    struct node *newNode = NULL;

    newNode = add_node_to_empty(head, d);
    
    for (int i = 1; i < pos; i++) {
        ptr1 = ptr1->next;
    }

    if (ptr1->next == NULL) {
        ptr1->next = newNode;
        newNode->prev = ptr1;
    } else {
        ptr2 = ptr1->next;
        ptr1->next = newNode;
        ptr2->prev = newNode;
        newNode->prev = ptr1;
        newNode->next = ptr2;
    }
    return head;
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
    
    // create head node
    struct node *head = (struct node*)malloc(sizeof(struct node));

    head = add_node_to_empty(head, 10);

    // print node 
    struct node *ptr = head;
    print(ptr);
    
    // add node at end 
    ptr = add_node_to_end(ptr, 20);
    ptr = add_node_to_end(ptr, 30);
    // ptr = add_node_to_end(ptr, 40);
    // ptr = add_node_to_end(ptr, 50);

    // print
    ptr = head;
    print(ptr);

    // add node at position
    int pos = 3;

    head = add_node_at_pos(head, 45, pos);
    
    // print
    ptr = head;
    print(ptr);
    
    return 0;
}
