/*
 * C program data structure Single list
 * */

#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *link;
};

// counter node func
void count_number_of_nodes(struct node *head) {
    int count = 0;
    struct node *ptr = NULL;

    // check wheter linked list empty or not
    if (head == NULL) {
        printf("The linked list is empty.\n");
    }

    ptr = head;
    
    // counter node until linked list is empty.
    while (ptr != NULL) {
        count++;
        // update link to the next node.
        ptr = ptr->link;
    }

    // print node 
    printf("The linked list has %d nodes\n", count);

}


int main () {
    
    // create first node
    struct node *head = (struct node*)malloc(sizeof(struct node));
    head->data = 20;
    head->link = NULL;

    // create second node
    struct node *current = (struct node*)malloc(sizeof(struct node));
    current->data = 56;
    current->link = NULL;

    // link head node to second node
    head->link = current;

    //create third node
    current = (struct node*)malloc(sizeof(struct node));
    current->data = 36;
    current->link = NULL;

    // link second node to link third node using head->link->link
    head->link->link = current;

    // func count the number of node in linked list
    count_number_of_nodes(head);


    return 0;
}
