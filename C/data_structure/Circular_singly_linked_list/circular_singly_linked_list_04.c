#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

// add node at empty
struct node *add_node_at_empty(int d) {
    struct node *temp = (struct node*)malloc(sizeof(struct node));
    temp->data = d;
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

    return temp;
}

// add node at prarticular position
struct node *add_node_at_pos(struct node *tail, int d, int pos) {
    struct node *temp = (struct node*)malloc(sizeof(struct node));
    temp->data = d;
    temp->next = temp;

    struct node *ptr = tail->next;
    for (int i = 1; i < pos; i++) {
        ptr = ptr->next;
    }
    
    temp->next = ptr->next;
    ptr->next = temp;

    if (ptr == tail) {
        tail = tail->next;
    }
    return tail;     
 
}
// print node
void print_nodes(struct node *tail) {
    struct node *ptr = tail->next;

    do {
        printf("%d ", ptr->data);
        ptr = ptr->next;
    } while (ptr != tail->next);
    printf("\n");
}

int main() {
    
    // add node at empty
    struct node *tail = NULL;
    tail = add_node_at_empty(40);

    struct node *ptr = tail;
    print_nodes(ptr);
    
    // add node at end
    tail = add_node_at_end(tail, 50);
    tail = add_node_at_end(tail, 60);
    tail = add_node_at_end(tail, 70);
    ptr = tail;
    print_nodes(ptr);
    
    // add node at position
    tail = add_node_at_pos(tail, 55, 2);
    ptr = tail;
    print_nodes(ptr);
    return 0;
}
