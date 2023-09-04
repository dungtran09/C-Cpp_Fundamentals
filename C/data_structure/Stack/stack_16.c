/*
 * C program - data structure - Application of stack
 * Convert an Infix expression to posfix expression
 * */


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 100

int top = -1;
char inFix[MAX];
char postFix[MAX];
char stack_arr_ch[MAX];

int isEmpty();
int isFull();
void push(char);
char pop();
void inFixToPostFix();
int check_space(char);
int check_precedence(char);

void print();

int main() {
    
    printf("Enter a inFix expression to convert: ");
    scanf("%[^\n]s", inFix); 

    inFixToPostFix();
    
    print();

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
void push(char ch) {
    if (isFull()) {
        printf("Stack Overflow.\n");
        exit(1);
    }
    top++;
    stack_arr_ch[top] = ch;
}

// pop data out tup stack
char pop() {
    int val;
    if (isEmpty()) {
       printf("Stack Underflow.\n");
        exit(1);
    }
    
    val = stack_arr_ch[top];
    top--;

    return val;
}

// check space in infix expression
int check_space(char ch) {
    if (ch == ' ' || ch == '\t') {
        return 1;
    } else {
        return 0;
    }
}

// check prececedence
int check_precedence(char ch) {
    switch (ch) {
        case '^':
            return 3;
        case '*':
        case '/':
            return 2;
        case '-':
        case '+':
            return 1;
        default:
            return 0;
    }
}

// convert infix to posfix
void inFixToPostFix() {
    int i, j = 0;
    char symbol, next;
    
    for (i = 0 ; i < strlen(inFix); i++) {
        symbol = inFix[i];
        // ingnored if there is a space in infix expression
        if (!check_space(symbol)) {
            switch (symbol) {
                case '(':
                    push(symbol);
                    break;
                case ')':
                    while ((next = pop()) != '(') {
                        postFix[j++] = next;
                    }
                    break;
                case '+':
                case '-':
                case '*':
                case '/':
                case '^':
                    while (!isEmpty() && check_precedence(stack_arr_ch[top]) >= check_precedence(symbol)) {
                        postFix[j++] = pop();
                    }
                    push(symbol);
                    break;
                default:
                    postFix[j++] = symbol;
            }
        }
    }

    while (!isEmpty()) {
        postFix[j++] = pop();
    }
    postFix[j] = '\0';
}


// print posfix expression
void print() {
    int i = 0;
    printf("The infix is conveted to posfix is: ");
    while (postFix[i]) {
        printf("%c",postFix[i++]);
    }
    printf("\n");
}
