/*
 * C program circular double linked list 
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
        tail->next = newP;
        temp->prev = newP;
        tail = newP;
        return tail;
    }
}

// del node at particular position
struct node *del_node_at_pos(struct node *tail, int pos) {
    
    if (tail == NULL) {
        return tail;
    }

    struct node *temp = tail->next;
    while (pos > 1) {
        temp = temp->next;
        pos--;
    }
    
    struct node *temp2 = temp->prev;
    temp2->next = temp->next;
    temp->next->prev = temp2;
    free(temp);

    if (temp == tail) {
        tail = temp2;
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

int main() {
    
    // create first node 
    struct node *tail = NULL;
    tail = add_node_at_empty(444);

    // add node at end 
    tail = add_node_at_end(tail, 555);
    tail = add_node_at_end(tail, 666);
    tail = add_node_at_end(tail, 777);
    tail = add_node_at_end(tail, 888);

    print(tail);

    // del node at particular pos
    int pos = 4;
    tail = del_node_at_pos(tail, pos);

    print(tail);


    return 0;
}
