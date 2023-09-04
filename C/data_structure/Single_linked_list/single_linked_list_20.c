/*
 * C program create a linked list increment order 
 * and insert a new node into linked list
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
    temp->next = NULL;
    
    return temp;
}

// add node at end 
struct node *add_node_at_end(struct node *head, int data) {
    struct node *temp = (struct node*)malloc(sizeof(struct node));
    temp->data = data;
    temp->next = NULL;

    struct node *ptr = head;

    while (ptr->next != NULL) {
        ptr = ptr->next;
    }

    ptr->next = temp;

    return head;
}

// inset node 
struct node *insert_node(struct node *head, int data) {
    struct node *newP = (struct node*)malloc(sizeof(struct node));
    newP->data = data;
    newP->next = NULL;

    int key = data;
    if (head == NULL || key < head->data ) {
        newP->next = head;
        head = newP;
        return head;
    } else {
        struct node *temp = head;
        while (temp->next != NULL && key > temp->next->data) {
            temp = temp->next;
        }
        newP->next = temp->next;
        temp->next = newP;
    }
    return head;
}

// print node 
void print(struct node *head) {
    if (head == NULL) {
        printf("The linked list is empty.\n");
    } else {
        struct node *ptr = head;
        while (ptr != NULL) {
            printf("%d ", ptr->data);
            ptr = ptr->next;
        }
        printf("\n");
    }
}

int main () {

    // create first node 
    struct node *head = NULL;
    head = add_node_at_empty(100);
        
    // add node at end
    head = add_node_at_end(head, 200);
    head = add_node_at_end(head, 300);
    head = add_node_at_end(head, 400);
    head = add_node_at_end(head, 500);

    struct node *ptr = head;

    print(ptr);
    
    // inset new node 
    head = insert_node(head, 450);

    ptr = head;
    print(ptr);

    return 0;
}
