/*
 * Stack implementation -- using index 0 as the top most element
 * */

#include <stdio.h>
#include <stdlib.h>

#define MAX 5
int stack_arr[MAX];
int first = -1;

// push element
void push(int data) {
    int i;

    first++;
    for (i = first; i > 0; i--) {
        stack_arr[i] = stack_arr[i-1];
    }
    stack_arr[0] = data;
}

// pop element
int pop() {
    int i, value;
    value = stack_arr[0];

    for (i = 0; i < first; i++) {
        stack_arr[i] = stack_arr[i+1];
    }
    first--;
    return value;
}

// print element
void print() {
    int i;
    if (first == -1) {
        printf("Stack Underflow.\n");
        exit(1);
    }
    for (i = 0; i <= first; i++) {
        printf("%d ", stack_arr[i]);
    }
    printf("\n");
}

int main () {
    int data;

    push(10);
    push(20);
    push(30);
    
    data = pop();
    print();


    return 0;
}
