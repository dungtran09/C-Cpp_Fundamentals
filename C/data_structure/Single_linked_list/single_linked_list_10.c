/*
 * C program create a single linked list after that del first element on linked list
 * */

#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *link;
};

// ad node 
struct node *add_node_at_end(struct node *head, int d) {
    struct node *ptr = head;

    struct node *temp = (struct node*)malloc(sizeof(struct node));
    temp->data = d;
    temp->link = NULL;

    ptr->link = temp;
    
    return temp;
}

// del node at first
struct node *del_node_at_first(struct node *head) {
    
    struct node *ptr = head;

    if (head == NULL) {
        printf("The linked list already emptry.\n");
    } else {
        head = head->link;
        free(ptr);
        ptr = NULL;
    }
    return head;
}

// print node 
void print_node(struct node *ptr) {
    if (ptr == NULL) {
        printf("Linked list is empty.\n");
        exit(1);
    }

    while (ptr != NULL) {
        printf("%d ", ptr->data);
        ptr = ptr->link;
    }

    printf("\n");
}
int main () {
    
    // create first node
    struct node *head = (struct node*)malloc(sizeof(struct node));
    head->data = 21;
    head->link = NULL;

    // create next node in linked list
    struct node *ptr = head;
    ptr = add_node_at_end(ptr, 54);
    ptr = add_node_at_end(ptr, 47);
    
    // print node 
    ptr = head;
    print_node(ptr);
    
    // del node at first
    head = del_node_at_first(head);
    ptr = head;
    print_node(ptr);

    return 0;
}
