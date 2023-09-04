/*
 * C program data structure - Stack
 * Given a number and find prime factor of the number .
 * Push all prime factors of the number into stack descending order and print 
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

// check stack is Full
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

// find prime factots
void prime_factor(int num) {
    int i = 2;
    while (num != 1) {
        while (num % i == 0) {
            push(i);
            num = num / i;
        }
        i++;
    }

    // print prime factor
    printf("The prime factor of the number is : ");
    while (top != -1) {
        printf("%d ", pop());
    }
    printf("\n");
}

// print element 
void print() {

}


int main() {
    int n;
    printf("Enter a positive number: ");
    scanf("%d", &n);
        
    prime_factor(n);

    return 0;
}
