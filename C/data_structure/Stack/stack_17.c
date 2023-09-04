/*
 * C program Application of stack
 * Write a program to convert infix expression to posfix expression using stack data structure
 * */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#define MAX 100

int top = -1;
int stack_arr[MAX];
char infix[MAX];
char postfix[MAX];

int isEmpty();
int isFull();
void push(char);
int pop();
void inFixToPostFix();
int check_space(char);
int check_precedence(char);
int eval_posfix();
void print();

int main () {
    
    int result;
    printf("Enter a infix expression: ");
    scanf("%[^\n]s", infix);

    inFixToPostFix();
    print();

    
    result = eval_posfix();
    printf("The result of posfix expression is: %d\n", result);

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
        return 1;
    } else {
        return 0;
    }
}

// push data into stack
void push(char data) {
    if (isFull()) {
        printf("Stack Overflow.\n");
        exit(1);
    }

    top++;
    stack_arr[top] = data;
}

// pop data out up stack
int pop() {
    int data;

    if (isEmpty()) {
        printf("Stack Underflow.\n");
        exit(1);
    }

    data = stack_arr[top];
    top--;
    return data;
}

// convert infix to posfix
void inFixToPostFix() {
    int i, j = 0;
    char next;
    for (i = 0; i < strlen(infix); i++) {

        if (!check_space(infix[i])) {
                
            switch (infix[i]) {
                case '(':
                    push(infix[i]);
                    break;
                case ')':
                    while ((next = pop()) != '(') {
                        postfix[j++] = next;
                    }
                    break;
                case '+':
                case '-':
                case '*':
                case '/':
                case '^':
                    while (!isEmpty() && check_precedence(stack_arr[top]) >= check_precedence(infix[i])) {
                        postfix[j++] = pop();
                    }
                   push(infix[i]);
                    break;
                default:
                    postfix[j++] = infix[i];
            }

        }
    }

    while (!isEmpty()) {
        postfix[j++] = pop();
    }
    postfix[j] = '\0';
}

// check prececedence 
int check_precedence(char symbol) {
    switch (symbol) {
        case '^':
            return 3;
        case '*':
        case '/':
            return 2;
        case '+':
        case '-':
            return 1;
        default:
            return 0;
    }
}

// check space
int check_space(char symbol) {
    if (symbol == ' ' || symbol == '\t') {
        return 1;
    } else {
        return 0;
    }
}

// print data 
void print() {
    int i = 0;

    printf("The infix has been convered to posfix is: ");
    while (postfix[i]) {
        printf("%c", postfix[i]);
        i++;
    }

    printf("\n");
}

// evaluate posfix expression
int eval_posfix() {
    int i;
    int a, b;

    for (i = 0; i < strlen(postfix); i++) {
        if (postfix[i] >= '0' && postfix[i] <= '9') {
            push(postfix[i] - '0');
        } else {
            a = pop();
            b = pop();
            switch (postfix[i]) {
                case '+':
                    push(b+a);
                    break;
                case '-':
                    push(b-a);
                    break;
                case '*':
                    push(b*a);
                    break;
                case '/':
                    push(b/a);
                    break;
                default:
                    push(pow(b, a));
            }
        }
    }

    return pop();
}
