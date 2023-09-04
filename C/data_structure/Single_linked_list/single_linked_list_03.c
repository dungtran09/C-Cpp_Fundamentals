/*
* C program data structure Single linked list
* */

#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *link;    
};

int main () {

    struct node *head = (struct node*)malloc(sizeof(struct node));

    // create first node 
    head->data = 45;
    head->link = NULL;

    // create second node
    struct node *current = (struct node*)malloc(sizeof(struct node));
    current->data = 95;
    current->link = NULL;
    head->link = current;


    // create third node
    current = (struct node*)malloc(sizeof(struct node));
    current->data = 3;
    current->link = NULL;
    
    // update link of second node to link to third node
    head->link->link = current;


      
    return 0;
}
