/*
 * C program circular circular linked list 
 * Create a circular linked list and find whether an element 
 *  has into a circular linked list or not
 * */

#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

// add node at empty
struct node *add_node_at_empty(int data) {
    struct node *temp = (struct node*)malloc(sizeof(struct node));
    temp->data = data;
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
    tail = tail->next;

    return tail;
}

// find an element 
int find_element(struct node *tail, int element) {
    struct node *temp = NULL;
    int index = 0;
    if (tail == NULL) {
        return -2;
    }

    temp = tail->next;
    do {
        if (element == temp->data) {
            return index;
        }
        temp = temp->next;
        index++;
    } while (temp != tail->next);
    
    return -1;
}

// print node 
void print(struct node *tail) {
    if (tail == NULL) {
        printf("There is no node in linked list.\n");
        exit(0);
    }

    struct node *ptr = tail->next;
    do {
        printf("%d ", ptr->data);
        ptr = ptr->next;
    } while (ptr != tail->next);
    printf("\n");
}

int main () {
    
    // create first node 
    struct node *tail = NULL;
    tail = add_node_at_empty(500);

    // add node at end
    tail = add_node_at_end(tail, 600);
    tail = add_node_at_end(tail, 700);
    tail = add_node_at_end(tail, 800);
    tail = add_node_at_end(tail, 900);
    
    // print node 
    struct node *ptr = tail;
    print(ptr);
    
    // find a element
    int taget = 900;
    int result = find_element(tail, taget);
    
    if (result == -2) {
        printf("The linked list is empty.\n");
    } else if (result == -1) {
        printf("The element is not found.\n");
    } else {
        printf("The element is found at %d index.\n", result);
    }
    return 0;
}
