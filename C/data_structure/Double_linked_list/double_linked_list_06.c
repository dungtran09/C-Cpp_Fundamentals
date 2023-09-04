/*
 * C program Data structure - double linked list 
 * */

#include <stdio.h>
#include <stdlib.h>

struct node {
    struct node *prev;
    int data;
    struct node *next;
};

// add first node 
struct node *add_node_to_empty(struct node *head, int d) {
    struct node *temp = (struct node*)malloc(sizeof(struct node));
    temp->prev = NULL;
    temp->data = d;
    temp->next = NULL;

    head = temp;

    return head;
}

// add node at empty
struct node *add_node_at_end(struct node *head, int d) {
    struct node *ptr = (struct node*)malloc(sizeof(struct node));
    ptr->prev = NULL;
    ptr->data = d;
    ptr->next = NULL;
    
    struct node *temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }

    temp->next = ptr;
    ptr->prev = temp;

    return head;
}

// create linked list
struct node *create_linked_list(struct node *head) {
    int i, n, data;
    printf("Enter number of element: ");
    scanf("%d", &n);

    if (n == 0) {
        return head;
    }
    // create first node
    printf("Enter element 1th: ");
    scanf("%d", &data);
    head = add_node_to_empty(head, data);
    // create next nodes
    for (i = 1; i < n; i++) {
        printf("Enter element %dth: ", i+1);
        scanf("%d", &data);
        head = add_node_at_end(head, data);
    }
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
        ptr = ptr->next;
    }
    printf("\n");
}


int main() {
    
    // create node 
    struct node *head = (struct node*)malloc(sizeof(struct node));
    head = create_linked_list(head);

    struct node *ptr = head;
    // print node 
    ptr = head;
    print(ptr);

    return 0;
}
