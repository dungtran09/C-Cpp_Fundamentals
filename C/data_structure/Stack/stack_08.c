/*
 * C program - data structure _ linked list implementation of stack
 * */

#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *link;
} *top = NULL;

// push element
void *push(int data) {
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

// print node
void print() {
    struct node *temp = top;
    
    printf("List elements of the stack: ");
    while (temp) {
        printf("%d ", temp->data);
        temp = temp->link;
    }
    printf("\n");
}

int main() {
        
    int choise, data;

    while (1) {
        printf("\n1. Push.\n");
        printf("2. Print\n");
        printf("3. Quit.\n\n");

        printf("Which action do you want?: ");
        scanf("%d", &choise);

        switch (choise) {
            case 1:
                printf("Enter element to be push: ");
                scanf("%d", &data);
                push(data);
                break;
            case 2: 
                print();
                break;
            case 3:
                printf("Exiting...\n");
                exit(1);
            default:
                printf("WRONG CHOISE.\n");
                exit(1);
        }
    }

    return 0;
}
