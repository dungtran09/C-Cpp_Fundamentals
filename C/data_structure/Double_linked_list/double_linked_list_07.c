/*
 * C program , create double linked list and
 * a func to del first node of double linked list
 * */

#include <stdio.h>
#include <stdlib.h>

struct node {
    struct node *prev;
    int data;
    struct node *next;
};

// add node at empty
struct node *add_node_to_empty(struct node *head, int d) {
    struct node *temp = (struct node*)malloc(sizeof(struct node));
    temp->prev = NULL;
    temp->data = d;
    temp->next = NULL;

    head = temp;
    return head;
}

// add node at end
struct node *add_node_to_end(struct node *head, int d) {
    struct node *temp = (struct node*)malloc(sizeof(struct node));
    temp->prev = NULL;
    temp->data = d;
    temp->next = NULL;

    struct node *ptr = head;
    while (ptr->next != NULL) {
        ptr = ptr->next;
    }

    ptr->next = temp;
    temp->prev = ptr;

    return head;
}

// del first node
struct node *del_first_node(struct node *head) {
    struct node *temp = head;

    head = head->next;
    head->prev = NULL;

    free(temp);
    temp = NULL;

    return head;
}

// print node
void print(struct node *head) {
    struct node *ptr = head;
    if (head == NULL) {
        printf("The double linked list is empty.\n");
        exit(1);
    }

    while (ptr != NULL) {
        printf("%d ", ptr->data);
        ptr = ptr->next;
    }
    printf("\n");
}

int main () {   

    // create first node
    struct node *head = NULL;
    head = add_node_to_empty(head, 100);
    
    // create more node 
    head = add_node_to_end(head, 200);
    head = add_node_to_end(head, 300);
    head = add_node_to_end(head, 400);
    head = add_node_to_end(head, 500);

    struct node *ptr = head;
     
    print(ptr);
       
    // del first node 
    head = del_first_node(head);
    head = del_first_node(head);

    ptr = head;
    print(ptr);


    return 0;
}
