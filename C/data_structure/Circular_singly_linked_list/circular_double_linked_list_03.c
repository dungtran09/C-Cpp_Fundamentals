/*
 * C program circular double linkes list
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

// add node at end
struct node *add_node_at_end(struct node *tail, int d) {
    struct node *newP = add_node_at_empty(d);

    if (tail == NULL) {
        return newP;
    } else {
        struct node *temp = tail->next;
        newP->next = temp;
        newP->prev = tail;
        tail->next = newP;
        temp->prev = newP;
        tail = newP;
        return tail;
    }
}

// print node 
void print(struct node *tail) {
    if (tail == NULL) {
        printf("The is no node in linked list.\n");
    } else {
        struct node *ptr = tail->next;
        do {
            printf("%d ", ptr->data);
            ptr = ptr->next;
        } while (ptr != tail->next);
        printf("\n");
    }
}

int main () {
    
    // create node 
    struct node *tail = NULL;
    tail = add_node_at_empty(20);

    tail = add_node_at_end(tail, 30);
    tail = add_node_at_end(tail, 40);
    tail = add_node_at_end(tail, 50);


    // print node
    print(tail);

    return 0;
}
