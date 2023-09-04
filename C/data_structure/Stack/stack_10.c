/*
 * C program data structure stack implementation
 * */

#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *link;
} *top = NULL;

// check if linked list is empty or not
int isEmpty() {
    if (top == NULL) {
        return 1;
    } else {
        return 0;
    }
}

// push element
void push(int data) {
    struct node *newNode = (struct node*)malloc(sizeof(struct node));
    if (newNode == NULL) {
        printf("Stack Overflow.\n");
        exit(1);
    }
    newNode->data = data;
    newNode->link = NULL;

    newNode->link = top;
    top = newNode;
}

// print element
void print() {
    
    if (isEmpty()) {
        printf("Stack Underflow.\n");
        exit(1);
    }

    struct node *temp = top;
    printf("List elements: ");
    while (temp) {
        printf("%d ", temp->data);
        temp = temp->link;
    }
    printf("\n");

}


int main() {
    
    push(10);
    push(20);
    push(30);

    print();

    return 0;
}
