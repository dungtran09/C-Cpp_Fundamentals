/*
 * C program - Convert decimal to binary using Stack
 *
 * */

#include <stdio.h>
#include <stdlib.h>

#define MAX 50
int stack_arr[MAX];
int top = -1;

// ckeck stack is empty
int isEmpty() {
    if (top == -1) {
        return 1;
    } else {
        return 0;
    }
}

// check stack is full
int isFull() {
    if (top == MAX - 1) {
        return 1;
    } else {
        return 0;
    }
}

// push element
void push(int data) {
    if (isFull()) {
        printf("Stack Overflow.\n");
        exit(1);
    }
    top++;
    stack_arr[top] = data;
}

// pop element
int pop() {
    int value;
    if (isEmpty()) {
        printf("Stack Underflow.\n");
        exit(1);
    }
    value = stack_arr[top];
    top--;
    return value;
}

// convert decimal to bibary
void convertToBinary(int num) {
    
    while (num != 0) {
        push(num % 2);
        num = num / 2;
    }
    
}

// print element
void print() {
    if (isEmpty()) {
        printf("Stack Underflow.\n");
        exit(1);
    }
    
    printf("The decimal has been convert to binary is: ");
    while (!isEmpty()) {
        printf("%d", pop());
    }
    printf("\n");
}

int main() {
    
    int n;
    printf("Enter a number to convert: ");
    scanf("%d", &n);

    convertToBinary(n);

    print();

    return 0;
}
