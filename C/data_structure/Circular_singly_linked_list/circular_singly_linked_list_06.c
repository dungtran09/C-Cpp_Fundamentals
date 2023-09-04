/*
 * C program data structure circular singly linked list 
 * Create a circular linked list and a func del first node on linked list
 * */

#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

// add node at empty
struct node *add_node_at_empty(struct node *tail, int d) {
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

// create nodes
struct node *create_list_nodes(struct node *tail) {
    int i, n, data;

    printf("Enter the number of element: ");
    scanf("%d", &n);

    if (n == 0)  return tail;
    
    // add first node 
    printf("Enter data for 1th node: ");
    scanf("%d", &data);
    tail = add_node_at_empty(tail, data);
    
    // add more node at end
    for (i = 1; i < n; i++) {
        printf("Enter data for %dth node: ", i+1);
        scanf("%d", &data);
        tail = add_node_at_end(tail, data);
    }
    return tail;
}

// del node at first 
struct node *del_node_at_first(struct node *tail) {
    if (tail == NULL) {
        return tail;
    }

    if (tail->next == tail) {
        free(tail);
        tail = NULL;
        return tail;
    }
    struct node *temp = tail->next;
    tail->next = temp->next;
    free(temp);
    temp = NULL;
    return tail;
}

// print nodes 
void print(struct node *tail) {
    if (tail == NULL) {
        printf("No node on linked list.\n");
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
    
    // create circular linked list
    struct node *tail = NULL;
    tail = create_list_nodes(tail);

    // print node 
    struct node *ptr = tail;
    print(ptr);
    
    // del first node
    tail = del_node_at_first(tail);
    ptr = tail;
    print(ptr);
    
    return 0;
}
