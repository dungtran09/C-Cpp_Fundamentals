/*
 * C program circula double linked list 
 * */

#include <stdio.h>
#include <stdlib.h>

struct node {
    struct node *prev;
    int data;
    struct node *next;
};

// add node at empty
struct node *add_node_at_empty(int d) {
    struct node *temp = (struct node*)malloc(sizeof(struct node));
    temp->prev = temp;
    temp->data = d;
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

// del node at end
struct node *del_node_at_end(struct node *tail) {
    struct node *temp;

    if (tail == NULL) {
        return tail;
    }

    if (tail == temp) {
        free(tail);
        tail = NULL;
        return tail;
    }

    temp = tail->prev;
    temp->next = tail->next;
    tail->next->prev = temp;

    free(tail);
    tail = temp;

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
    
    // create first node 
    struct node *tail = NULL;
    tail = add_node_at_empty(5);

    // add node at end
    tail = add_node_at_end(tail, 10);
    tail = add_node_at_end(tail, 15);
    tail = add_node_at_end(tail, 20);
    tail = add_node_at_end(tail, 25);
    tail = add_node_at_end(tail, 30);

    print(tail);

    // del node at end
    tail = del_node_at_end(tail);

    print(tail);


    return 0;
}
