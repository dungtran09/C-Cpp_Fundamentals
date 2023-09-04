#include <stdio.h>
#include <stdlib.h>

#define MAX 100
struct node* stack[MAX];
int top = -1;

struct node {
    struct node* left;
    int data;
    struct node* right;
};

void push(struct node*);
struct node* pop();
int isEmpty();

struct node* createNode(int);
void inOrder(struct node*);

int main(int argc, char *argv[]) {

    struct node *root = NULL;
    root = createNode(10);
    root->left = createNode(20);
    root->right = createNode(30);
    root->left->left = createNode(40);
    root->left->right = createNode(50);
    root->left->right->left = createNode(60);
    root->left->right->right = createNode(70);
    
    inOrder(root);

    printf("\n");

    return EXIT_SUCCESS;
}

void push(struct node* ptr) {
    if (top == (MAX - 1)) {
        printf("Stack Overflow.");
        exit(1);
    }
    ++top;
    stack[top] = ptr;
}

struct node* pop() {
    if (top == -1) {
        printf("Stack Underflow.");
        exit(1);
    }
    struct node* ptr = stack[top];
    --top;
    return ptr;
}

int isEmpty() {
    if (top == -1) {
        return 1;
    }
    return 0;
}

struct node* createNode(int data) {
    struct node* newNode = malloc(sizeof(struct node));
    newNode->left = NULL;
    newNode->data = data;
    newNode->right = NULL;
    return newNode;
}

void inOrder(struct node* root) {
    struct node* ptr = root;

    if (ptr == NULL) {
        printf("It is a binary tree empty.");
        exit(1);
    }
    
    while (1) {
        while (ptr->left != NULL) {
            push(ptr);
            ptr = ptr->left;
        }

        while (ptr->right == NULL) {
            printf("%d ", ptr->data);
            if (isEmpty()) {
                return;
            }
            ptr = pop();
        }
        printf("%d ", ptr->data);
        ptr = ptr->right;
    }
}

