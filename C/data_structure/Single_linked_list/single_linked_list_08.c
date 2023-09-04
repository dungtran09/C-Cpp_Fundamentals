/*
 * C program Single linked list
 * */

#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *link;
};

// add node
void add_node_at_begin(struct node **head, int d) {
    struct node *ptr = malloc(sizeof(struct node));
    ptr->data = d;
    ptr->link = NULL;

    ptr->link = *head;
    *head = ptr;
}

// print node
void print_nodes(struct node* head) { 
    struct node* temp = NULL;

    if (head == NULL) {
        printf("The linked list is empty.\n");
        exit(0);
    }

    temp = head;
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->link;
    }
    
    printf("\n");

}
int main() {
    // create new node 
    struct node *head = (struct node*)malloc(sizeof(struct node));
    head->data = 20;
    head->link = NULL;
    
    // add node at begin on the linked list
    add_node_at_begin(&head, 15); 
    add_node_at_begin(&head, 10);
    add_node_at_begin(&head, 5); 

    struct node *ptr = (struct node*)malloc(sizeof(struct node));
    ptr = head ;
    print_nodes(ptr);
    
    return 0;
}

