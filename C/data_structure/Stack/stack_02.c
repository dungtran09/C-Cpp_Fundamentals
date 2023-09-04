/*
 * C program - stack implementation
 * */

#include <stdio.h>
#include <stdlib.h>

#define MAX 4
int stack_arr[MAX];
int top = -1;

// push elements
void push(int data) {
    if (top == MAX - 1) {
        printf("Stack Overflow.");
        return;
    }

    top++;
    stack_arr[top] = data;

}

// pop elements
int pop() {
    
    if (top == -1) {
        printf("Stack Underflow.\n");
        exit(1);
    }

    int value;
    value = stack_arr[top];
    top--;
    return value;
}

// print element
void print() {
    int i;
    if (top == -1) {
        printf("Stack Underflow.\n");
        return;
    }

    for (i = top; i >= 0; i--) {
        printf("%d ", stack_arr[i]);
    }
    printf("\n");
}


int main() {
    
    // push element 
    push(20);
    push(30);
    push(40);
    
    print();
    // pop element
    int data;
    data = pop();
    data = pop();
    data = pop();

    print();

    return 0;
}
