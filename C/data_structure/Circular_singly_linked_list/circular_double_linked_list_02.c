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

// add node at empty
struct node *add_node_at_empty(int data) {
    struct node *temp = (struct node*)malloc(sizeof(struct node));
    temp->prev = temp;
    temp->data = data;
    temp->next = temp;

    return temp;
}

// add node at begin
struct node *add_node_at_begin(struct node *tail, int d) {
    struct node *newP = add_node_at_empty(d);
    if (tail == NULL) {
        return newP;
    } else {
        struct node *temp = tail->next;
        newP->next = temp;
        newP->prev = tail;
        temp->prev = newP;
        tail->next = newP;
        return tail;
    }
}

// print node 
void print (struct node *tail) {
    if (tail == NULL) {
        printf("There is no node in linked list.\n");
    } else {
        struct node *temp = tail->next;
        do {
            printf("%d ", temp->data);
            temp = temp->next;
        } while (temp != tail->next);
        printf("\n");
    }
}
int main () {
    // add node at begin
    struct node *tail = NULL;
    tail = add_node_at_begin(tail, 500);
    tail = add_node_at_begin(tail, 600);
    tail = add_node_at_begin(tail, 700);
    
    // print node
    struct node *ptr = tail;
    print(ptr);
    


    return 0;
}
