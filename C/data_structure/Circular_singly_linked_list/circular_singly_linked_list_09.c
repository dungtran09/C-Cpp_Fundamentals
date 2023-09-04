/*
 * Create circular singly linked list 
 * and count the number of element in circular linked list
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
    tail = tail->next;
    return tail;
}

// count number of element
int count_number_of_element(struct node *tail) {
    int count = 0;
    struct node *temp = tail->next;
    while (temp != tail) {
        temp = temp->next;
        count++;
    }
    count++;
    return count;
}
// print node 
void print(struct node *tail) {
    if (tail == NULL) {
        printf("There is no node in linked list.\n");
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
    // create first node
    struct node *tail = NULL;
    tail = add_node_at_empty(50);

    tail = add_node_at_end(tail, 60);
    tail = add_node_at_end(tail, 70);
    tail = add_node_at_end(tail, 80);
    
    // print node
    struct node *ptr = tail;
    print(ptr);
    
    // count number of element
    int result;
    result = count_number_of_element(tail); 

    printf("There is %d elements on circular singly linked list.\n", result);

    return 0; 
}
