#include <stdio.h>
#include <stdlib.h>

#define MAX 100

struct node *stack[MAX];
int top = -1;

void push(struct node*);
struct node *pop();
int isEmpty();

struct node {
    struct node *left;
    int data;
    struct node *right;
};

struct node *createNode(int);
void preOrder(struct node*);

int main(int argc, char *argv[]) {
    struct node *root = NULL;
    root = createNode(10);
    root->left = createNode(20);
    root->right = createNode(30);
    root->left->left = createNode(40);
    root->left->right = createNode(50);
    root->left->right->left = createNode(60);
    root->left->right->right = createNode(70);

    preOrder(root);

    printf("\n");
    
    return EXIT_SUCCESS;
}

void push(struct node* ptr) {
    if (top == (MAX - 1)) {
        printf("Stack Overflow.\n");
        exit(1);
    }
    ++top;
    stack[top] = ptr;
}

struct node *pop() {
    struct node *ptr = NULL;
    if (top == -1) {
        printf("Stack Underflow.\n");
    }
    ptr = stack[top];
    --top;
    return ptr;
}

int isEmpty() {
    if (top == -1) {
        return 1;
    }
    return 0;
}

struct node *createNode(int data) {
    struct node *newNode = malloc(sizeof(struct node));
    newNode->left = NULL;
    newNode->data = data;
    newNode->right = NULL;
    return newNode;
}

void preOrder(struct node *root) {
    struct node *ptr = root;
    if (ptr == NULL) {
        printf("It is a Binary Tree empty!\n");
        exit(1);
    }
    push(ptr);
    while (!isEmpty()) {
       ptr = pop();
        printf("%d ", ptr->data);

        if (ptr->right != NULL) {
            push(ptr->right);
        }
        if (ptr->left != NULL) {
            push(ptr->left);
        }

    }
}
