/*
 * Data structure - Tree 
 * C program to check if a tree is a complete binary tree or not usint linked
 * */

#include <stdio.h>
#include <stdlib.h>

// function prototyte
struct node *createNode(int);
int countNode(struct node*);
int isCompleteBinaryTree(struct node*, int, int);

// node tree 
struct node {
    struct node *left;
    int data;
    struct node *right;
};

int main(int argc, char *argv[]) {
    
    int index = 0;
    struct node *root;
    root = createNode(10);
    root->left = createNode(20);
    root->right = createNode(30);
    root->left->left = createNode(40);
    root->left->right = createNode(50);
    root->right->left = createNode(60);
    root->right->right = createNode(70);

    printf("%d ", root->data);
    printf("%d ", root->left->data);
    printf("%d ", root->right->data);
    
    int count = countNode(root);
    printf("\nNumber of node: %d\n", count);

    if (isCompleteBinaryTree(root, index, count)) {
        printf("The binary tree is a complete binary tree.");
    } else {
        printf("The binary tree is NOT a complete binary tree.");
    }
    printf("\n");

    return EXIT_SUCCESS;
}

// To create node 
struct node *createNode(int data) {
    struct node *newNode = malloc(sizeof(struct node));
    newNode->data = data;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}


// To count number of node in tree
int countNode(struct node *root) {
    int left, right;
    if (root == NULL) {
        return 0;
    }
    if ((root->left == NULL) && (root->right == NULL)) {
        return 1;
    }
    if ((root->left) && (root->right)) {
        left = countNode(root->left);
        right = countNode(root->right);
        return (1 + left + right);
    }
    return 0;
}

// To check if a tree is a conplete binary tree or not
 int isCompleteBinaryTree(struct node *root, int index, int count) {
    if (root == NULL) {
        return 1;
    }
    if (index >= count) {
        return 0;
    }
    int left = isCompleteBinaryTree(root->left, 2*index + 1, count);
    int right = isCompleteBinaryTree(root->right, 2*index + 2, count);
    return (left && right);
}
