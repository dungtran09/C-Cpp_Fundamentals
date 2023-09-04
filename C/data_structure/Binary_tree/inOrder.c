/*
 * C program data structure
 * Trevesal Binary tree with in order
 */

#include <stdio.h>
#include <stdlib.h>

struct node
{
    struct node *left;
    int data;
    struct node *right;
};

struct node *createNode(int);
void inOrder(struct node *);

int main(int argc, char const *argv[])
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
    inOrder(root);
    printf("\n");
    return 0;
}

struct node *createNode(int data)
{
    struct node *newNode = malloc(sizeof(struct node));
    newNode->left = NULL;
    newNode->data = data;
    newNode->right = NULL;

    return newNode;
}

void inOrder(struct node *root)
{
    if (root == NULL)
    {
        return;
    }
    inOrder(root->left);
    printf("%d ", root->data);
    inOrder(root->right);
}
