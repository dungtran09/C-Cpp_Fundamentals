/*
 * C program circula double linked list 
 *
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
struct node *add_node_at_end(struct node *tail, int data) {
    struct node *newP = add_node_at_empty(data);

    if (tail == NULL) {
        return newP;
    } else {
        struct node *temp = tail->next;
        newP->next = temp;
        newP->prev = tail;
        temp->prev = newP;
        tail->next = newP;
        tail = newP;
        return tail;
    }
}

// del node at first 
struct node *del_node_at_first(struct node *tail) {
    if (tail == NULL) {
        return tail;
    }

    struct node *temp = tail->next;
    if (temp == tail) {
        free(tail);
        tail = NULL;
        return tail;
    }

    tail->next = temp->next;
    temp->next->prev = tail;
    free(temp);
    return tail;
}

// print node 
void print(struct node *tail) {
    if (tail == NULL) {
        printf("There is no node in linked list.\n");
    } else {
        struct node *ptr = tail->next ;
        do {
            printf("%d ",ptr->data);
            ptr = ptr->next;
        } while (ptr != tail->next);
        printf("\n");
    }
}

int main () {
    
    // create first node 
    struct node *tail = NULL;
    tail = add_node_at_empty(10);
    
    tail = add_node_at_end(tail , 20);
    tail = add_node_at_end(tail , 30);
    tail = add_node_at_end(tail , 40);

    print(tail);
    
    // del node at first
    tail = del_node_at_first(tail);
    print(tail);

    return 0;
}
