/*
 * C program - data structure - Stack implementation
 * */

#include <stdio.h>
#include <stdlib.h>

#define MAX 4

int stack_arr[MAX];
int top = -1;

// push elements
void push(int data) {
    if (top == MAX - 1) {
        printf("Stack Overflow.\n");
        return;
    }
    top++;
    stack_arr[top] = data;
}

int main() { 
    push(1);
    push(2);
    push(3);
    return 0;
}
