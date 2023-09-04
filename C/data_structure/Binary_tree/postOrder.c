/**
 * C program data structure Binary tree using linked
 * Create and travesal binary tree by recursive
*/

#include <stdio.h>
#include <stdlib.h>

struct node {
    struct node *left;
    int data;
    struct node *right;
};

struct node *createNode(int);
void postOrder(struct node *);

int main(int argc, char *argv[]) {
    struct node *root = NULL;
    root = createNode(10);
    root->left = createNode(20);
    root->left->left = createNode(40);
    root->left->right = createNode(50);
    root->left->right->left = createNode(70);
    root->left->right->right = createNode(80);
    root->right = createNode(30);
    root->right->right = createNode(60);
    root->right->right->left = createNode(90);
    
    postOrder(root);
    printf("\n");
    return 0;
}

struct node *createNode(int data) {
    struct node *newNode = malloc(sizeof(struct node));
    newNode->left = NULL;
    newNode->data = data;
    newNode->right = NULL;
    return newNode;
}

void postOrder(struct node *root) {
    if (root == NULL) {
        return;
    }
    postOrder(root->left);
    postOrder(root->right);
    printf("%d ", root->data);
}
