/*
 * C program create a linked list and , reverse order the array
 *
 * */
#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *link;
};

// ad node at end
struct node *add_node_at_end(struct node *head, int d) {
    struct node *ptr = (struct node*)malloc(sizeof(struct node));
    ptr->data = d;
    ptr->link = NULL;

    head->link = ptr;

    return ptr;
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
void print(struct node *head) {
    struct node *ptr = head;
    if (head == NULL) {
        printf("The linked list already empty.\n");
        exit(1);
    }

    // print
    while (ptr != NULL) {
        printf("%d ", ptr->data);
        ptr = ptr->link;
    }
    printf("\n");
}


int main () {
    // create first node 
    struct node *head = (struct node*)malloc(sizeof(struct node));
    head->data = 100;
    head->link = NULL;

    // add node
    struct node *ptr = head;
    ptr = add_node_at_end(ptr, 200);
    ptr = add_node_at_end(ptr, 300);
    ptr = add_node_at_end(ptr, 400);
    ptr = add_node_at_end(ptr, 500);
    ptr = add_node_at_end(ptr, 600);
    
    ptr = head;
    print(ptr);

    // reverse order node
    head = reverse_nodes(head);
    
    ptr = head;
    print(ptr);

    return 0;
}
