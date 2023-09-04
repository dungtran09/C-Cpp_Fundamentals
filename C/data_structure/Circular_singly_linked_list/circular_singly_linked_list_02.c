/*
 * C program circular double linked list
 *
 * */

#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

// create fitst node
struct node *add_node_at_empty(int d) {
    struct node *temp = (struct node*)malloc(sizeof(struct node));
    temp->data = d;
    temp->next = temp;

    return temp;
}

// add node at begin
struct node *add_node_at_begin(struct node *tail, int d) {
    struct node *temp = (struct node*)malloc(sizeof(struct node));
    temp->data = d;
    temp->next = temp;

    temp->next = tail->next;
    tail->next = temp;
    
    return tail;
}

// print node
void print(struct node *tail) {
    struct node *ptr = tail->next;
    
    do {
        printf("%d ", ptr->data);
        ptr = ptr->next;
    } while (ptr != tail->next);
    printf("\n");
}

int main () {
    
    // create first node 
    int data = 45;
    struct node *tail = NULL;
    tail = add_node_at_empty(data);
    
    tail = add_node_at_begin(tail, 55);
    tail = add_node_at_begin(tail, 65);
    tail = add_node_at_begin(tail, 75);
    struct node *ptr = tail;

    print(tail);

    return 0;
}
