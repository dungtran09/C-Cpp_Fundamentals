/*
 *  C program create a linked list and move the last node to first node .
 *  and display the linked list has modifile
 * */

#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *link;
};

// add node 
struct node *add_node_at_end(struct node *head, int d) {
    struct node *temp = (struct node*)malloc(sizeof(struct node));
    temp->data = d;
    temp->link = NULL;

    head->link = temp;

    return temp;
}

// move last node to first node 
struct node *move_last_to_first(struct node *head) {
    
    // check if linked list just has one or two node
    if (head == NULL || head->link == NULL) {
        printf("The linked list empty or just has one node.\n");
        exit(1);
    }

    struct node *prev = NULL;
    struct node *next = head->link;
    // move node
    while (next->link != NULL) {
        prev = next;
        next = next->link;
    }

    prev->link = NULL;
    next->link = head;
    head = next;

    return head;
}

// print node 
void print(struct node *head) {
    struct node *ptr = head;
    if (head == NULL) {
        printf("The linked list is empty.\n");
        exit(1);
    }

    // print
    while (ptr != NULL) {
        printf("%d ", ptr->data);
        ptr = ptr->link;
    }
    printf("\n");

}



int main () {
    // create first node
    struct node *head = (struct node*)malloc(sizeof(struct node));
    head->data = 10;
    head->link = NULL;

    // add node
    struct node *ptr = head;
    ptr = add_node_at_end(ptr, 20);
    ptr = add_node_at_end(ptr, 30);
    ptr = add_node_at_end(ptr, 40);
    ptr = add_node_at_end(ptr, 50);
    ptr = add_node_at_end(ptr, 60);
    ptr = add_node_at_end(ptr, 70);

    // print node
    ptr = head;
    print(ptr);

    // move last node to first node
    head = move_last_to_first(head);

    ptr = head;
    print(ptr);

    return 0;
}
