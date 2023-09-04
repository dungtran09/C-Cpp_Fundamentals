/*
 * C program circular double linked list
 * */

#include <stdio.h>
#include <stdlib.h>

struct node {
    struct node *prev;
    int data;
    struct node *next;
};

// create circular double linked list
struct node *circularDouble(int d) {
    struct node *temp = (struct node*)malloc(sizeof(struct node));
    temp->prev = temp;
    temp->data = d;
    temp->next = temp;

    return temp;
}

int main() {
    
    int data = 50;
    struct node *tail = NULL;

    tail = circularDouble(data);
        
    printf("%d\n", tail->data);

    return 0;
}
