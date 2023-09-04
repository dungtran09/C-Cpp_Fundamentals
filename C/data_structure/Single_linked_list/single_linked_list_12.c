/*
 * C program create a linked list and del last node in the linked list.
 *
 * */

#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *link;
};

// add node at first
struct node *add_node_at_first(struct node *head, int d) {
    
    struct node* temp = (struct node*)malloc(sizeof(struct node));
    temp->data = d;
    temp->link = NULL;

    temp->link = head;
    head = temp;

    return head;

}


// del node at end
void del_node_at_end(struct node * head) {
    
    struct node *temp = head;
    
    if (head == NULL) {
        printf("The linkd list is already empty.\n");
        exit(1);
    } else if (head->link == NULL) {
        free(head);
        head = NULL;
    } else {
        while (temp->link->link != NULL) {
            temp = temp->link;
        }
    }

    free(temp->link);
    temp->link = NULL;

}
// print node
void print_nodes (struct node* head) {
    struct node* ptr = head;
    if (head == NULL) {
        printf("The linked list is already empty.\n");
        exit(1);
    }

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
    head->data = 35;
    head->link = NULL;

    // add nodes on first in linked list
    struct node *ptr = head;

    head = add_node_at_first(head, 30);
    head = add_node_at_first(head, 25);
    head = add_node_at_first(head, 20);
    
    ptr = head;
    // print node
    print_nodes(ptr);
    
    // del node at end
    del_node_at_end(head);

    print_nodes(ptr);
    
    return 0;
}
