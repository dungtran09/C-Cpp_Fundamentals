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

//  add node at end
struct node *add_node_at_end(struct node *tail, int data) {
    struct node *temp = (struct node*)malloc(sizeof(struct node));
    temp->data = data;
    temp->next = temp;
    
    temp->next = tail->next;
    tail->next = temp;
    tail = tail->next;

    return tail;
}

// create list
struct node *create_list_nodes(struct node *tail) {
    int i, n, data;

    printf("Enter number of nodes: ");
    scanf("%d", &n);
    
    if (n == 0) {
        return tail;
    }

    printf("Enter data for 1th node: ");
    scanf("%d", &data);

    tail = add_node_at_empty(data);
    
    // add nodes sequence 
    for (i = 1; i < n; i++) {
        printf("Enter data for %dth node: ",i+1);
        scanf("%d", &data);
        tail = add_node_at_end(tail, data);
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

int main () {
    // create fist node 
    struct node *tail = NULL;
    // create a sequence node 
    tail = create_list_nodes(tail);
    
    //print node
    struct node *ptr = tail;
    ptr = tail;
    print_nodes(ptr);
    return 0;
}
