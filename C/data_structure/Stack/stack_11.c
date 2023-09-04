/*
 * C program data structure
 * */

#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *link;
};

// check if stack is empty 
int isEmpty(struct node *top) {
    if (top == NULL) {
        return 1;
    } else {
        return 0;
    }
}

// push element
struct node* push(struct node *top, int data) {
    struct node *newNode = (struct node*)malloc(sizeof(struct node));

    if (newNode == NULL) {
        printf("Stack Overflow.\n");
        exit(1);
    }

    newNode->data = data;
    newNode->link = NULL;

    newNode->link = top;
    top = newNode;

    return top;
}


// pop element
struct node *pop(struct node *top) {
    struct node *temp;
    if (isEmpty(top)) {
        printf("Stack Underflow.\n");
        exit(1);
    }
    temp = top;
    top = top->link;

    return temp;
}

// print element
void print(struct node *top) {
    struct node *temp = top;
    if (isEmpty(top)) {
        printf("Stack Underflow.\n");
        exit(1);
    }

    printf("List Elements: ");
    while (temp) {
        printf("%d ", temp->data);
        temp = temp->link;
    }
    printf("\n");
}


int main() {
    struct node *temp;

    struct node *top  = NULL;
    struct node *top1 = NULL;
    struct node *top2 = NULL;
    
    // add element
    top = push(top, 74);
    top = push(top, 45);
    top = push(top, 43);

    // pop element from stack top
    temp = pop(top);
    top = temp->link;
    // push element into stack top1
    top1 = push(top1, temp->data);
    
    // print element stack top
    print(top);

    // print element stack top1
    print(top1);

    return 0;
}
