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

// add node at position
struct node *add_node_at_pos(struct node *tail, int data, int pos) {
    struct node *newP = add_node_at_empty(data);
    
    if (tail == NULL) {
        return newP;
    }
    struct node *temp = tail->next;
    while (pos > 1) {
        temp = temp->next;
        pos--;
    }

    newP->prev = temp;
    newP->next = temp->next;
    temp->next = newP;
    temp->next->prev = newP;
    if (temp == tail) {
        tail = tail->next;
    }
    return tail;
}

// print node 
void print(struct node *tail) {
    
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
    
    // create node 
    struct node *tail = NULL;
    tail = add_node_at_empty(200);
    
    // add node at end
    tail = add_node_at_end(tail, 300);
    tail = add_node_at_end(tail, 400);
    tail = add_node_at_end(tail, 500);
    tail = add_node_at_end(tail, 600);
    print(tail);
    
    // add node at particular position
    int pos = 2;
    int data = 444;

    tail = add_node_at_pos(tail, data, pos);

    print(tail);

    return 0;
}
