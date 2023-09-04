/*
 * C program data structure double linked list
 * */

#include <stdio.h>
#include <stdlib.h>

struct node {
    struct node *prev;
    int data;
    struct node *next;
};

// add node to empty
struct node *add_node_to_empty(struct node *head, int d) {
    
    struct node *ptr = (struct node*)malloc(sizeof(struct node));
    ptr->prev = NULL;
    ptr->data = d;
    ptr->next = NULL;

    head = ptr;

    return head;
}

//  print node 
void print(struct node* head) {
    
    if (head == NULL) {
        printf("The double linked is empty.\n");
        exit(1);
    }

    struct node *temp = head;
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

int main () {
    
    // first node 
    struct node *head = (struct node*)malloc(sizeof(struct node));
    
    // add node 
    head = add_node_to_empty(head, 10);

    // print node
    struct node *ptr = head;
    print(ptr);


    return 0;
}
