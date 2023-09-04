#include <stdio.h>
#include <stdlib.h>

struct node {
    struct node* left;
    int data;
    struct node* right;
};

struct node* createNode(int data);
struct node* insertNode(struct node* root, int data);
void printNodes(struct node* root);

int main(int argc, char *argv[]) {
    struct node* root = NULL;
    root = createNode(45);
    root->left = createNode(39);
    root->right = createNode(56);
    root->right->left = createNode(54);
    root->right->right = createNode(78);
    
    printf("Before insert: ");
    printNodes(root);

    printf("\nAfter insert: ");
    root = insertNode(root, 12);
    root = insertNode(root, 55);
    printNodes(root);
    printf("\n");

    return EXIT_SUCCESS;
}

struct node* createNode(int data) {
    struct node* newNode = malloc(sizeof(struct node));
    newNode->left = NULL;
    newNode->data = data;
    newNode->right = NULL;

    return newNode;
}

struct node* insertNode(struct node* root, int data) {
    
    if (root == NULL) {
        return createNode(data);
    } else {
        if (root->data > data) {
           root->left = insertNode(root->left, data);
        } else {
           root->right = insertNode(root->right, data);
        }
    }
    return root;
}

void printNodes(struct node* root) {
    if (root == NULL) {
        return;
    }

    printf("%d ", root->data);
    
    printNodes(root->left);
    printNodes(root->right);
    
}
