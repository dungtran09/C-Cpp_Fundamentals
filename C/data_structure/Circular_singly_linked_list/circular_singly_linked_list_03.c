/*
 * C program circular singly linked list
 * */

#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

// add node at empty
struct node *add_node_at_empty(int d) {
    struct node *temp = (struct node*)malloc(sizeof(struct node));
    temp->data = d;
    temp->next = temp;

    return temp;
}

// add node at end 
struct node *add_node_at_end(struct node *tail, int d) {
    struct node *temp = (struct node*)malloc(sizeof(struct node));
    temp->data = d;
    temp->next = temp;

    temp->next = tail->next;
    tail->next = temp;
    tail = temp;

    return temp;
}

// print node
void print_nodes(struct node *tail) {
    struct node *ptr = tail->next;
    do {
        printf("%d ", ptr->data);
        ptr = ptr->next;
    } while (ptr != tail->next);
    printf("\n");
}

int main () {
    
    // create first node
    int data = 50;
    struct node *tail = NULL;
    tail = add_node_at_empty(data);

    struct node *ptr = tail;
    print_nodes(ptr);
    
    tail = add_node_at_end(tail, 60);
    tail = add_node_at_end(tail, 70);
    tail = add_node_at_end(tail, 80);
    
    ptr = tail;
    print_nodes(ptr);
    return 0;
}
