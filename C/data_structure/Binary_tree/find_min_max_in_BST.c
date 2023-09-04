#include <stdio.h>
#include <stdlib.h>

struct node {
    struct node* lelf;
    int data;
    struct node* right;
};

struct node* createNode(int);
struct node* findMin(struct node*);
struct node* findMax(struct node*);

int main(int argc, char *argv[]) {
    struct node* root = NULL;
    root = createNode(67);
    root->lelf = createNode(34);
    root->right = createNode(80);
    root->lelf->lelf = createNode(10);
    root->lelf->right = createNode(55);
    root->lelf->right->lelf = createNode(45);
    root->lelf->right->right = createNode(60);

    struct node* min = findMin(root);
    struct node* max = findMax(root);

    printf("Min: %d\n", min->data);
    printf("Max: %d\n", max->data); 

    return EXIT_SUCCESS;
}

struct node* createNode(int data) {
    struct node* newNode = malloc(sizeof(struct node));
    newNode->lelf = NULL;
    newNode->data = data;
    newNode->right = NULL;

     return newNode;
}

struct node* findMin(struct node* root) {
    if (root == NULL) {
        return root;
    }

    if (root->lelf == NULL) {
        return root; 
    }
    return findMin(root->lelf);
}

struct node* findMax(struct node* root) {
    if (root == NULL) {
        return root;
    }

    if (root->right == NULL) {
        return root;
    }
    return findMax(root->right);
}
