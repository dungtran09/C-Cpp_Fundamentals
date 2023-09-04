/*
 * C program create linked list , and a func del first node in linked list
 * */

#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *link;
};

// create node 
struct node *add_node_at_end(struct node *head, int d) {
    struct node *temp = (struct node*)malloc(sizeof(struct node));
    temp->data = d;
    temp->link = NULL;

    head->link = temp;

    return temp;
} 


// del node at first
 
struct node *del_node_at_first(struct node *head) {
    if (head == NULL) {
        printf("The linked list is empty.\n");
        exit(1);
    } else {
        struct node *temp = head;
        head = head->link;
        free(temp);
        temp = NULL;
    }

    return head;
}
// print node
void print_nodes(struct node *head) {
    struct node *ptr = head;

    if (head == NULL) {
        printf("The linked list is already empty.\n");
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
    head->data = 2;
    head->link = NULL;

    // create next node 
    struct node *ptr = head;
    ptr = add_node_at_end(ptr, 4);
    ptr = add_node_at_end(ptr, 6);
    ptr = add_node_at_end(ptr, 8);
    
    ptr = head;

    print_nodes(ptr);
    
    // del node at first
    head = del_node_at_first(head);
    
    ptr = head; 
    print_nodes(ptr);
    return 0;
}
