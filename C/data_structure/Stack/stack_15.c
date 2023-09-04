/*
 * C program Application of stacks
 * Given a algebraic expression and check if the nestest brackets in expression is valid or not 
 * */


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 100
char stack[MAX];
int top = -1;

int isEmpty();
int isFull();
void push(char);
char pop();
int check_balanced(char*, int);
int check_match_char(char, char);

int main() {
    
    char expr[MAX];
    int balanced;
    int length;
    printf("Enter the algebraic expression: ");
    fgets(expr, MAX, stdin);

    length = strlen(expr);

    balanced = check_balanced(expr, length);

    if (balanced) {
        printf("The algebraic expression is valid.\n");
    } else {
        printf("The algebraic expr is NOT valid\n");
    }

    return 0;
}

// check if stack is empty or not 
int isEmpty() {
    if (top == -1) {
        return 1;
    } else {
        return 0;
    }
}

// check if stack is full or not
int isFull() {
    if (top == MAX - 1) {
        return 0;
    } else {
        return 0;
    }
}

// push char into stack
void push(char c) {
    if (isFull()) {
        printf("Stack Overflow.\n");
        exit(1);
    }

    top++;
    stack[top] = c;
}

// pop char out up stack
char pop() {
    int c;
    if (isEmpty()) {
        printf("Stack Underflow.\n");
        exit(1);
    }
    c = stack[top];
    top--;

    return c;
}   

// check balanced brackets
int check_balanced(char* expr, int length) {
    int i;
    char temp;
    
    for (i = 0; i < length; i++) {
        
        // push  open brackets into stack
        if (expr[i] == '(' || expr[i] == '{' || expr[i] == '[' || expr[i] == '<') {
            push(expr[i]);
        }
        
        // if the expr is close brackets is compare mathch brackets 
        if (expr[i] == ')' || expr[i] == '}' || expr[i] == ']' || expr[i] == '>') {
            if (isEmpty()) {
                printf("The right brackets more than left brackets\n");
                return 0;
            } else {
                temp = pop();
                if (!(check_match_char(temp, expr[i]))) {
                    printf("Mismatched brackets.\n");
                    return 0;
                }
            }
        }
    }

    if (isEmpty()) {
        printf("Balanced brackets");
        return 1;
    } else {
        printf("The left brackets more than right brackets.\n");
        return 0;
        
    }
}


// check mathch brackets
int check_match_char(char ch1, char ch2) {
    if (ch1 == '(' && ch2 == ')') {
        return 1;
    }

    if (ch1 == '{' && ch2 == '}') {
        return 1;
    }

    if (ch1 == '[' && ch2 == ']') {
        return 1;
    }

    if (ch1 == '<' && ch2 == '>') {
        return 1;
    }

    return 0;
}
