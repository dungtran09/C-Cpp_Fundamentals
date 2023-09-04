/*
 * C program - data structure - Stack implememtation
 * Reverse stack 
 * */

#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node* link;
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
void push(struct node** top, int data) {
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
    struct node *temp;
    int val;

    temp = *top;
    val = temp->data;
    *top = (*top)->link;
    free(temp);
    temp = NULL;

    return val; 
}

// print element
void print(struct node** top) {
    struct node* ptr;

    if (*top == NULL) {
        printf("Stack Underflow.\n");
        return;
    }
    ptr = *top;
    while (ptr) {
        printf("%d ",ptr->data);
        ptr = ptr->link;
    }
    printf("\n");
}

void reverse_stack(struct node **top) {
    struct node *top1 = NULL;
    struct node *top2 = NULL;

    // move element from stack top into stack top1
    while (*top != NULL) {
        push(&top1, pop(top));
    }

    // move element from stack top1 into stack top2
    while (top1 != NULL) {
        push(&top2, pop(&top1));
    }

    // move element from stack top2 into stack top (reverse stack)
    while (top2 != NULL) {
        push(top, pop(&top2));
    }
}

int main() {
    // create stack 
    struct node *top = NULL;
    
    push(&top, 10);
    push(&top, 20);
    push(&top, 30);
    push(&top, 40);
    
    printf("Stack before reverse: ");
    print(&top);

    // reverse the stack
    reverse_stack(&top);
    printf("Stack after reverse:  ");
    print(&top);
    
    return 0;
}
