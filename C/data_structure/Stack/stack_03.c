/*
 * C program data structure - stack implementation
 * */

#include <endian.h>
#include <stdio.h>
#include <stdlib.h>

#define MAX 5

int stack_arr[MAX];
int top = -1;

// check if stack empty or not
int isEmpty() {
    if (top == -1) {
        return 1;
    } else {
        return 0;
    }
}

// check if stack full or not
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
        return;
    }

    top++;
    stack_arr[top] = data;

}

// pop element
int pop() {
    if (isEmpty()) {
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

    if (isEmpty()) {
        printf("Stack Underflow.\n");
        return;
    }

    int i;
    for (i = top; i >= 0; i--) {
        printf("%d ", stack_arr[i]);
    }

    printf("\n");
}

// get top element
int peek() {
    if (isEmpty()) {
        printf("Stack Underflow.\n");
        exit(1);
    }

    return stack_arr[top];
}

int main() {
    
    int data, choise;

    while (1) {
        printf("\n1. Push.\n");
        printf("2. Pop.\n");
        printf("3. Print top element.\n");
        printf("4. Print all elements.\n");
        printf("5. Quit.\n\n");

        printf("What action which you want?: ");
        scanf("%d", &choise);

        switch (choise) {
            case 1:
                printf("Enter the element to be pushed: ");
                scanf("%d", &data);
                push(data);
                break;
            case 2:
                data = pop();
                printf("You deleted the element %d out up stack.\n", data);
                break;
            case 3: 
                data = peek();
                printf("Top most element of stack is: %d\n", data);
                
                break;
            case 4:
                printf("List all element of the stack is: ");
                print();
                break;
            case 5:
                printf("Program exiting.\n");
                exit(0);

            default:
                printf("WRONG CHOISE. exiting...!\n");
                exit(1);
        }
    }

    return 0;
}
