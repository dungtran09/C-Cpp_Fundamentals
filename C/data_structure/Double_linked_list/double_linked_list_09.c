/*
 * C program create an double linked list and a func to del a node 
 * at particular position
 * */

#include <stdio.h>
#include <stdlib.h>

struct node {
    struct node *prev;
    int data;
    struct node *next;
};

// create first node 
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

// del node at end
struct node *del_node_at_end(struct node *head) {
    struct node *ptr1 = NULL;
    struct node *ptr2 = head;

    while (ptr2->next != NULL) {
        ptr2 = ptr2->next;
    }

    ptr1 = ptr2->prev;
    ptr1->next = NULL;
    free(ptr2);
    ptr2 = NULL;

    return head;
}
// del node at position
struct node *del_node_at_pos(struct node *head, int pos) {
    struct node *temp1 = head;
    struct node *temp2 = head;
    
    while (pos > 1 ) {
        temp2 = temp2->next;
        pos--;
    }
    
    if (temp2->next == NULL) {
        head = del_node_at_end(head);   
    }
    temp1 = temp2->prev;
    temp1->next = temp2->next;
    temp2->next->prev = temp2;
    free(temp2);
    temp2 = NULL;

    return head;
}

// print node 
void print_nodes(struct node *head) {
    struct node *temp = head;
    if (head == NULL) {
        printf("The linked list is empty.\n");
        exit(1);
    }

    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

int main() {
    // create first node
    struct node *head = NULL;
    head = add_node_to_empty(head, 74);
    
    // add more nodes
    head = add_node_to_end(head, 43);
    head = add_node_to_end(head, 73);
    head = add_node_to_end(head, 92);

    struct node *ptr = head;
    print_nodes(ptr);
    
    // del node particular position
    int pos = 3;
    head = del_node_at_pos(head, pos);

    ptr = head;
    print_nodes(ptr);

    return 0;


}
