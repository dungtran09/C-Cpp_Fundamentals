/*
 * C program create circular singly linked list 
 * and a func to del nodes at particular position
 * */

#include <stdlib.h>
#include <stdio.h>

struct node  {
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

// add node at end
struct node *add_node_at_end(struct node *tail, int data) {
    struct node *temp = (struct node*)malloc(sizeof(struct node));
    temp->data = data;
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

    if (n == 0) {
        return tail;
    } else {
        printf("Enter data for 1th node: ");
        scanf("%d", &data);
        tail = add_node_at_empty(tail, data);
    }

    // add sequence nodes at end
    for (i = 1; i < n; i++) {
        printf("Enter data for %dth node: ", i+1);
        scanf("%d", &data);
        tail = add_node_at_end(tail, data);
    }
    return tail;
}

// del node at particular position
struct node *del_node_at_pos(struct node *tail, int pos) {
    if (tail == NULL) {
        return tail;
    }
    struct node *temp1 = tail->next;
    struct node *temp2 = NULL;

    if (tail->next == tail) {
        free(tail);
        tail = NULL;
        return tail;
    }
    
    while ( pos > 2) {
        temp1 = temp1->next;
        pos--;
    }
    temp2 = temp1->next;
    temp1->next = temp2->next;
    if (temp2 == tail) {
        tail = temp1;
    }
    free(temp2);
    temp2 = NULL;
    
    return tail;
}


// print node 
void print_nodes(struct node *tail) {
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

// create list 
int main () {
    // create first node
    struct node *tail = NULL;
    tail = create_list_nodes(tail);
    
    // print node
    struct node *ptr = tail;
    print_nodes(ptr);
    
    // del node at particular position
    int pos = 2;
    tail = del_node_at_pos(tail, pos);

    print_nodes(tail);

    return 0;
}
