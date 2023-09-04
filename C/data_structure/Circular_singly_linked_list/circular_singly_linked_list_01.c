/*
 * Circular singly linked list
 * */

#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};


// create a circular singly linked list
struct node *circularSingly(int d) {
    struct node *temp = (struct node*)malloc(sizeof(struct node));
    temp->data = d;
    temp->next = temp;

    return temp;
}

int main () {
    
    int data = 45;
    struct node *tail = NULL;
    tail = circularSingly(data);

    printf("%d\n", tail->data);
    return 0;
}
