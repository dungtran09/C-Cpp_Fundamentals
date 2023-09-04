/*
 * Program C Single linked list
 * */

#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *link;
};

// add node at end
struct node* add_node_at_end(struct node *ptr, int d) {
    
    struct node* temp = (struct node*)malloc(sizeof(struct node));
    temp->data = d;
    temp->link = NULL;
    
    ptr->link = temp;
    return temp;
}   

// add node at particular position
struct node *add_node_at_pos(struct node *head, int d, int pos) {
    struct node *ptr = head;
    struct node *ptr2 = (struct node*)malloc(sizeof(struct node));
    ptr2->data = d;
    ptr2->link = NULL;

    // check linked empty or not
    if (head == NULL) {
        printf("Linked list is empty");
        exit(1);
    }

    // get position to add
    for (int i = 1; i < pos ; i++) {
        ptr = ptr->link;
    }
    
    ptr2->link = ptr->link;
    ptr->link = ptr2;
    ptr = head;

    return ptr;
}


// print node 
void print_nodes(struct node *head) {
    struct node *temp = NULL;
    
    if (head == NULL) {
        printf("The linked list is empty.\n");
        exit(1);
    }
    temp = head;

    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->link;
    }

    printf("\n");
}

int main () {
    
    // create first node 
    struct node *head = (struct node*)malloc(sizeof(struct node));
    head->data = 45;
    head->link = NULL;

    // create next node (end node)
    struct node *ptr = head;
    ptr = add_node_at_end(ptr, 55);
    ptr = add_node_at_end(ptr, 65);
    ptr = add_node_at_end(ptr, 75);
    
    ptr = head;
    print_nodes(ptr);

    // add node at particular position
    head = add_node_at_pos(head, 67, 3);

    ptr = head;
    print_nodes(ptr);

    return 0;
}
