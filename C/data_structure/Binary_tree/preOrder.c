/*
 * C Program implementation binary tree.
 * Create binary tree and traversal using prev order recursive
 * */

#include <stdio.h>
#include <stdlib.h>

struct node
{
    struct node *left;
    int data;
    struct node *right;
};

// function prototyle
struct node *createNode(int);
void preOrder(struct node *);

// main function
int main(int argc, char *argv[])
{
    struct node *root;
    root = createNode(10);
    root->left = createNode(20);
    root->right = createNode(30);
    root->left->left = createNode(40);
    root->left->right = createNode(50);
    root->right->right = createNode(60);
    root->left->right->left = createNode(70);
    root->left->right->right = createNode(80);
    root->right->right->left = createNode(90);
     
    preOrder(root);
    printf("\n");
    return EXIT_SUCCESS;
}

// create node
struct node *createNode(int data)
{
    struct node *newNode = malloc(sizeof(struct node));
    newNode->left = NULL;
    newNode->data = data;
    newNode->right = NULL;
    return newNode;
}

// traversal binary tree
void preOrder(struct node *root)
{
    if (root == NULL)
    {
        return;
    }
    printf("%d ", root->data);
    preOrder(root->left);
    preOrder(root->right);
}
