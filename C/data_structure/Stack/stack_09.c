/*
 * C program - data structure - Linked list of stacks implementation
 * */

#include <stdlib.h>
#include <stdio.h>

struct node {
    int data;
    struct node *link;
} *top = NULL;

// check linked list of stack if empty
int isEmpty() {
    if (top == NULL) {
        return 1;
    } else {
        return 0;
    }
}

// push element
void push(int data) {
    struct node *newNode = (struct node*)malloc(sizeof(struct node));
    
    if (newNode == NULL) {
        printf("Stack Overflow.\n");
        exit(1);
    }

    newNode->data = data;
    newNode->link = NULL;

    newNode->link = top;
    top = newNode;
}

// pop element
int pop() {
    int val;

    if (isEmpty()) {
        printf("Stack Underflow.\n");
        exit(1);
    }
    struct node *temp = top;
    val = top->data;
    top = top->link;
    free(temp);
    temp = NULL;

    return val;
}

// get top most element
int peek() {
    if (isEmpty()) {
        printf("Stack Underflow.\n");
        exit(1);
    }

    return top->data;
}

// print element
void print() {
    if (isEmpty()) {
        printf("Stack Underflow.\n");
        exit(1);
    }

    struct node *temp = top;
    printf("List all elements: ");
    while (temp) {
        printf("%d ", temp->data);
        temp = temp->link;
    }
    printf("\n");
}

int main () {
    
    int choise, data;

    while (1) {
        printf("\n1. Push.\n");
        printf("2. Pop.\n");
        printf("3. Print top element.\n");
        printf("4. Print all elements.\n");
        printf("5. Quit.\n\n");

        printf("Which action do you want?: ");
        scanf("%d", &choise);

        switch (choise) {
            case 1:
                printf("Enter the element to be push: ");
                scanf("%d", &data);
                push(data);
                break;
            case 2: 
                data = pop();
                printf("%d has been POP OUT UP the stack.\n", data);
                break;
            case 3:
                printf("The TOP element of the stack is: %d.\n", peek());
                break;
            case 4:
                print();
                break;
            case 5:
                printf("Exiting...\n");
                exit(1);
            default:
                printf("WRONG CHOISE... Exiting...!\n");
                exit(1);
        }
    }

    return 0;
}
