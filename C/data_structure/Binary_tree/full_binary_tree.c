#include <stdlib.h>
#include <stdio.h>

struct node {
    struct node *left;
    int data;
    struct node *right;
};

struct node* createNode(int);
int isFullBinaryTree(struct node*);

int main(int argc, char *argv[]) {

    struct node* root = NULL;
    root = createNode(10);
    root->left = createNode(20);
    root->right = createNode(30);
    root->left->left = createNode(40);
    // root->left->right = createNode(50);

    if (isFullBinaryTree(root)) {
        printf("The Binary Tree given is a Full Binary Tree.\n");
    } else {
        printf("The Binary Tree given is NOT a Full Binary Tree.\n");
    }
    
    return EXIT_SUCCESS;
}


// create node 
struct node* createNode(int data) {
    struct node* newNode;
    newNode = malloc(sizeof(struct node));
    newNode->data = data;
    newNode->left = NULL;
    newNode->right = NULL;
    
    return newNode;
}

// check if a binary tree is a full binary tree or not
int isFullBinaryTree(struct node* root) {
    int left, right;

    if (root == NULL) return 1;
    if (root->left == NULL && root->right == NULL) return 1;
    if ((root->left) && (root->right)) {
        left = isFullBinaryTree(root->left);
        right = isFullBinaryTree(root->right);
        return (left && right);
    }
    return 0;
}

