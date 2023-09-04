/*
 * C program single linked list, create a func to del all linked list
 * */

#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *link;
};

// add node at first
struct node *add_node_at_first(struct node *head, int d) {
    struct node *temp = (struct node*)malloc(sizeof(struct node));
    temp->data = d;
    temp->link = NULL;

    head->link = temp;

    return temp;
}

// del all node
struct node *del_all_nodes(struct node *head) {
    if (head == NULL) {
        printf("The linked list already empty!\n");
        exit(1);
    }
    struct node *temp = head;
    
    while (temp != NULL) {
        temp = temp->link;
        // printf("Deleted node %d th successfully!\n", head->data);
        free(head);
        head = temp;
    }
    
    return head;
}

// print node 
void print_nodes(struct node *head) {
    struct node *ptr = head;
    if (head == NULL) {
        printf("The linked list is already empty.\n");
        exit(1);
    }

    // print node
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

    // add nodes at first
    struct node *ptr = head;
    ptr = add_node_at_first(ptr, 8);
    ptr = add_node_at_first(ptr, 6);
    ptr = add_node_at_first(ptr, 4);
    ptr = add_node_at_first(ptr, 2);

    ptr = head;
    print_nodes(ptr);

    // del all node
    head = del_all_nodes(head);

    ptr = head;
    print_nodes(ptr);

    return 0;
}
