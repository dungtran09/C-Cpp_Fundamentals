/*
 * C program data structure - Reverse stack 
 * */

#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *link;
};

// check if stack is empty or not
int isEmpty(struct node** top) {
    if (*top == NULL) {
        return 1;
    } else {
        return 0;
    }
} 

// push element
void push(struct node** top , int data) {
    struct node *newNode = (struct node*)malloc(sizeof(struct node));
    if (newNode == NULL) {
        printf("Stack Underflow.\n");
        exit(1);
    }

    newNode->data = data;
    newNode->link = NULL;

    newNode->link = *top;
    *top = newNode;
}

// pop element
int pop(struct node** top) {
    int val;
    struct node *temp;
    temp = *top;
    val = temp->data;
    *top = (*top)->link;

    free(temp);
    temp = NULL;
    return val;
}

// print element
void print(struct node** top) {
    struct node *temp;
    if (isEmpty(*top)) {
        printf("Stack Underflow.\n");
        return;
    }

    temp = *top;
    while (temp) {
        printf("%d ", temp->data);
        temp = temp->link;
    } 
    printf("\n");
}

int main () {
    
    int data;
    struct node *top = NULL;
    struct node *top1 = NULL;
    struct node *top2 = NULL;

    // push element into stack top
    push(&top, 74);
    push(&top, 43);
    push(&top, 92);
    
    printf("Original stack of TOP: ");
    print(&top);
    
    printf("\n");

    // move element of stack top into stack top1
    data = pop(&top);
    push(&top1, data);
    data = pop(&top);
    push(&top1, data);
    data = pop(&top);
    push(&top1, data);
    
    printf("Stack of TOP1: ");
    print(&top1);
    
    // move element of stack top1 into stack top2
    data = pop(&top1);
    push(&top2, data);
    data = pop(&top1);
    push(&top2, data);
    data = pop(&top1);
    push(&top2, data);

    printf("Stack of TOP2: ");
    print(&top2);

    
    // move element of stack of top2 into stack top
    data = pop(&top2);
    push(&top, data);
    data = pop(&top2);
    push(&top, data);
    data = pop(&top2);
    push(&top, data);

    printf("\nStack TOP after reverse: ");
    print(&top);

    return 0;
}
