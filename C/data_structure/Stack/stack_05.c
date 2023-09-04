/*
 * C program data structure - stack implementation
 * */

#include <stdio.h>
#include <stdlib.h>

#define MAX 5
int first = -1;
int stack_arr[MAX];

// check stack is full
int isFull() {
    if (first == MAX - 1) {
        return 1;
    } else {
        return 0;
    }
}

// check stack is empty
int isEmpty() {
    if (first == -1) {
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
    if (isEmpty()) {
        printf("Stack Underflow.\n");
        exit(1);
    }
    value = stack_arr[0];
    for (i = 0; i < first; i++) {
        stack_arr[i] = stack_arr[i+1];
    }
    first--;
    return value;
}

// get top most element
int peek() {
    if (isEmpty()) {
        printf("Stack Underflow.\n");
        exit(1);
    }
    return stack_arr[0];
}

// print element
void print() {
    int i;
    if (isEmpty()) {
        printf("Stack Underflow.\n");
        exit(1);
    }
    for (i = 0; i <= first; i++) {
        printf("%d ", stack_arr[i]);
    }
    printf("\n");
}

int main() {
    int data, choise;

    while (1) {
        printf("\n1. Push.\n");
        printf("2. Pop.\n");
        printf("3. Print the top element.\n");
        printf("4. Print all element.\n");
        printf("5. Quit.\n\n");
    
        printf("Which action do you want?: ");
        scanf("%d",&choise);


        switch (choise) {
            case 1:
                printf("Enter the element to be push: ");
                scanf("%d",&data);
                push(data);
                break;
            case 2:
                data = pop();
                printf("The %d has been pop out up the stack.\n", data);
                break;
            case 3:
                printf("The top most element is: %d.\n", peek());
                break;
            case 4:
                printf("List elements of the stack: ");
                print();
                break;
            case 5:
                exit(1);
            default:
                printf("WRONG CHOISE.\n");
                exit(1);
        }

    }

    return 0;
}
