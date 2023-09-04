/*
 * C program given a linked list , create a func we can del last node of linked list
 * */

#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *link;
};

// func add node at end
struct node *add_node_at_end(struct node *ptr, int d) {
    struct node *temp = (struct node*)malloc(sizeof(struct node));
    temp->data = d;
    temp->link = NULL;

    ptr->link = temp;

    return temp;
}


// func del last node
void del_node_at_last(struct node *head) {
    struct node *temp1 = head;
    struct node *temp2 = head;

    // del node
    if (head == NULL) {
        printf("The linked list already empty, exiting!\n");
        exit(1);
    } else if (head->link == NULL) {
        free(head);
        head = NULL;
    } else {
        while (temp1->link != NULL) {
            temp2 = temp1;
            temp1 = temp1->link;
        }
    }

    temp2->link = NULL;
    free(temp1);
    temp1 = NULL;
}

// print node 
void print_node(struct node *head) {
    struct node *ptr = head;
    if (head == NULL) {
        printf("Linked list already empty.\n");
        exit(1);
    }

    // print
    while (ptr != NULL) {
        printf("%d ", ptr->data);
        ptr = ptr->link;
    }

    printf("\n");
}

int main() {

    // create first node
    struct node *head = (struct node*)malloc(sizeof(struct node));
    head->data = 10;
    head->link = NULL;

    // create next node
    struct node *ptr = head;
    ptr = add_node_at_end(ptr, 20);
    ptr = add_node_at_end(ptr, 30);
    ptr = add_node_at_end(ptr, 40);
    ptr = add_node_at_end(ptr, 50);
   
    // del last node
    del_node_at_last(head);

    ptr = head;
    print_node(ptr);
    

    return 0;
}
