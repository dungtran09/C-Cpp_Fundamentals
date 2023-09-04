#include <stdio.h>
#include <stdlib.h>

#define MAX 100

int stack[MAX];
int top = -1;

void push(int);
int pop();
int isEmpty();

struct node {
    struct node *left;
    int data;
    struct node *right;
};

struct node *createNode(int);
void preOrderTravesal(struct node*);

int main(int argc, char *argv[]) {
    struct node *root = NULL;
    root = createNode(10);
    root->left = createNode(20);
    root->right = createNode(30);
    root->left->left = createNode(40);
    root->left->right = createNode(50);
    root->left->right->left = createNode(60);
    root->left->right->right = createNode(70);
    preOrderTravesal(root);
    printf("\n");
    return EXIT_SUCCESS;
}

// to push data into stack
void push(int data) {
    if (top == (MAX - 1)) {
        printf("Stack orverflow.\n");
        exit(1);
    }
    top++;
    stack[top] = data;
}

// to pop data out of stack
int pop() {
    if (top == -1) {
        printf("Stack underflow.\n");
        exit(1);
    }
    int data = stack[top];
    top = top - 1;
    return data;
}

// to check if stack is empty or not
int isEmpty() {
    if (top == -1) {
        return 1;
    } else {
        return 0;
    }
}

// to create node for binary tree
struct node *createNode(int data) {
    struct node *newNode = malloc(sizeof(struct node));
    newNode->left = NULL;
    newNode->data = data;
    newNode->right = NULL;
    
    return newNode;
}

// to pre order traversal binary tree not using recursive
void preOrderTravesal(struct node *root) {
    struct node *ptr = root;
    if (ptr == NULL) {
        printf("It is a binary tree empty.\n");
        exit(1);
    }

    push(ptr->data);
    while (!isEmpty()) {
        int val;
        val = pop();
        printf("%d ", val);

        if ((ptr->left != NULL) && (ptr->right != NULL)) {
            push(ptr->right->data);
            push(ptr->left->data);
            ptr = ptr->left;
        } else if ((ptr->right != NULL) && (ptr->left == NULL)) {
            push(ptr->right->data);
            ptr = ptr->right;
        } else if((ptr->left != NULL) && (ptr->right == NULL)) {
            push(ptr->left->data);
            ptr = ptr->left;
        }
    }
}

