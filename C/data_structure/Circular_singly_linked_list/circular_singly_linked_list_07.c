/*
 * C program data structure - circular linked list
 * Create a circular linked list and a func to del last node on circular linked 
 * */

#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

// add node at empty
struct node *add_node_at_empty(struct node *tail, int data) {
    struct node *temp = (struct node*)malloc(sizeof(struct node));
    temp->data = data;
    temp->next = temp;

    return temp;
}

// add node and end
struct node *add_node_at_end(struct node *tail, int data) {
    struct node *temp = (struct node*)malloc(sizeof(struct node));
    temp->data = data;
    temp->next = temp;

    temp->next = tail->next;
    tail->next = temp;

    return temp;
}

// create circular linked list
struct node *create_list_nodes(struct node *tail) {
    int i, n, data;

    printf("Enter the number of element: ");
    scanf("%d", &n);

    if (n == 0) {
        return tail;
    }
    
    // add node at empty
    printf("Enter data for 1th node: ");
    scanf("%d", &data);
    tail = add_node_at_empty(tail, data);
    
    // add more node at end
    for (i = 1; i < n; i++) {
        printf("Enter data for %dth node: ", i+1);
        scanf("%d", &data);
        tail = add_node_at_end(tail,data);
    }
    return tail;
}

// del node at end 
struct node *del_node_at_end(struct node *tail) {
    if (tail == NULL) {
        return tail;
    } else if (tail->next == tail) {
        free(tail);
        tail = NULL;
        return tail;
    } else {
        struct node *temp = tail->next;
        while (temp->next != tail) {
            temp = temp->next;
        }
        temp->next = tail->next;
        free(tail);
        tail = temp;
        return tail;
    }
}

// print node
void print(struct node *tail) {
    if (tail == NULL) {
        printf("There is no node on linked list.\n");
        exit(0);
    }
    struct node *temp = tail->next;
    do {
        printf("%d ", temp->data);
        temp = temp->next;
    } while (temp != tail->next);
    printf("\n");
}

int main() {
    struct node *tail = NULL;

    tail = create_list_nodes(tail);

    // print 
    struct node *ptr = tail;
    print(ptr);

    // del node at end
    tail = del_node_at_end(tail);
    ptr = tail;
    print(ptr);

    return 0;
}
