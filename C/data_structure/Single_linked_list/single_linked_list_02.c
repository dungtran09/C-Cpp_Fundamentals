/*
 * C program Data struct Single linked
 *
 * */

#include <stdio.h>
#include <stdlib.h>

// Single linked list
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



    


    return 0;
}
