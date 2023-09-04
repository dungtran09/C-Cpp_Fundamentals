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
void postOrder(struct node*);

int main(int argc, char *argv[]) {
    struct node* root = NULL;
    root = createNode(10);
    root->left = createNode(20);
    root->right = createNode(30);
    root->left->left = createNode(41);
    root->left->right = createNode(50);
    root->left->right->left = createNode(60);
    root->left->right->right =createNode(70);
  
    postOrder(root);
    printf("\n");
    return EXIT_SUCCESS;
}

void push(struct node* ptr) {
    if (top == (MAX - 1)) {
        printf("Stack Orverflow.\n");
        exit(1);
    }
    ++top;
    stack[top] = ptr;
}

struct node* pop() {
    if (top == -1) {
        printf("Stack Underflow.\n");
        exit(1);
    }
    struct node* temp = stack[top];
    --top;
    return temp;
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

void postOrder(struct node* root) {
    struct node* ptr = root;
    struct node* temp = root;
    if (ptr == NULL) {
        printf("It is a binary tree empty.\n");
        exit(1);
    }
    while (1) {
        while (ptr->left != NULL) {
            push(ptr);
            ptr = ptr->left;
        }

        while (ptr->right == NULL || ptr->right == temp) {
            printf("%d ", ptr->data);
            temp = ptr; 
            if (isEmpty()) {
                return;
            }
            ptr = pop();
        }
        push(ptr);
        
        ptr = ptr->right;
    }
}



