/*
 * C program data structures , single linked list
 * Given a linked list create a func to del a node at particular position
 * */

#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *link;
};

// add node 
struct node *add_node_at_end(struct node *head, int d) {
    struct node *ptr = (struct node*)malloc(sizeof(struct node));
    ptr->data = d;
    ptr->link = NULL;

    head->link = ptr;
    return ptr;

}

// del node at particular position
void del_node_at_pos(struct node **head, int pos) {
    
    // check cases  
    if (*head == NULL) {
        printf("The linked list is already empty.\n");
        exit(1);
    }

    struct node *curr = *head;
    struct node *prev = *head;
    
    // if pos at pos first node in linked list
    if (pos == 1) {
        *head = curr->link;
        free(curr);
        curr = NULL;
    } else {
        while (pos != 1) {
            prev = curr;
            curr = curr->link;
            pos--;
        }
        prev->link = curr->link;
        free(curr);
        curr = NULL;
    }
}

// print nodes
void print_nodes(struct node *head) {
    if (head == NULL) {
        printf("The linked list is empty.\n");
        exit(1);
    }
    struct node *temp = head;
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->link;
    }

    printf("\n");
}

int main() {
    
    // create first node
    struct node *head = (struct node*)malloc(sizeof(struct node));
    head->data = 45;
    head->link = NULL;

    // add node 
    struct node *ptr = head;
    ptr = add_node_at_end(ptr, 65);
    ptr = add_node_at_end(ptr, 75);
    ptr = add_node_at_end(ptr, 85);
    ptr = add_node_at_end(ptr, 95);
    
    ptr = head;

    print_nodes(ptr);
    
    // del node at position 3.
    del_node_at_pos(&head, 4);
    
    ptr = head;
    print_nodes(ptr);
    return 0;
}
