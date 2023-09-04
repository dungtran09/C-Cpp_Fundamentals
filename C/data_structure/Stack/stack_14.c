/*
 * C program to check if a string is a palindrome or not 
 * Using linked list of the stack to implememtation 
 * */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct node {
    int data;
    struct node* link;
} *top = NULL;

// check if stack is empty
int isEmpty() {
    if (top == NULL) {
        return 1;
    } else {
        return 0;
    }
}

// push string into stack 
void push(int data) {
    struct node *newNode = (struct node*)malloc(sizeof(struct node));

    if (newNode == NULL) {
        printf("Stack Underflow.\n");
        exit(1);
    }

    newNode->data = data;
    newNode->link = NULL;

    newNode->link = top;
    top = newNode;
}

// pop char out up stack
int pop() {
    int val;
    struct node *temp;
    if (isEmpty()) {
        printf("Stack Underflow.\n");
        exit(1);
    }
    temp = top;
    val = temp->data;
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

// check if string is palindrome
void palindrome_check(char* s) {
    int i = 0;
    while (s[i] != 'X') {
        push(s[i]);
        i++;
    }
    i++;
    while (s[i]) {
        if (isEmpty() || s[i] != pop()) {
            printf("The string is NOT a palindrome.\n");
            exit(1);
        }
        i++;
    }
    
    if (isEmpty()) {
        printf("The string is a palindrome.\n");
    } else {
        printf("The string is NOT a palindrome.\n");
    }
}

int main() {
    
    char str[100];
    
    printf("Enter a string to check: ");
    scanf("%s", &str);
    
    palindrome_check(str);

    return 0;
}
