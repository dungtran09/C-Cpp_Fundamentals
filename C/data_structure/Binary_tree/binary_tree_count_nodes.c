#include <stdio.h>
#include <stdlib.h>

struct node {
    struct node *left;
    int data;
    struct node *right;
};

struct node* createNode(int);
int countNode(struct node*);

int main(int argc, char *argv[]) {
    
    struct node* root = NULL;
    root = createNode(10);
    root->left = createNode(20);
    root->right = createNode(30);
    root->left->left = createNode(40);
    root->left->right = createNode(50);
    root->right->left = createNode(60);
    root->right->right = createNode(70);
    printf("Number of node: %d\n", countNode(root));
    return EXIT_SUCCESS;
}

// create binary tree
struct node* createNode(int data) {
    struct node* newNode = malloc(sizeof(struct node));
    newNode->data = data;
    newNode->left = NULL;
    newNode->right = NULL;

    return newNode;
}

// count number of node in binary tree
int countNode(struct node* root) {
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

