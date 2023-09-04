#include <stdio.h>
#include <stdlib.h>

struct node {
    struct node* lelf;
    int data;
    struct node* right;
};

struct node* createNode(int);
struct node* searchElement(struct node*, int);

int main(int argc, char *argv[]) {
    struct node* root = NULL;
    root = createNode(67);
    root->lelf = createNode(34);
    root->right = createNode(80);
    root->lelf->lelf = createNode(10);
    root->lelf->right = createNode(55);
    root->lelf->right->lelf = createNode(45);
    root->lelf->right->right = createNode(60);
    
    struct node* result = searchElement(root, 67);
    
    if (result != NULL) {
        printf("The element %d has been found in BT.\n", result->data);
    } else {
        printf("NOT found.\n");
    }

    return EXIT_SUCCESS;
}

struct node* createNode(int data) {
    struct node* newNode = malloc(sizeof(struct node));
    newNode->lelf = NULL;
    newNode->data = data;
    newNode->right = NULL;

    return newNode;
}

struct node* searchElement(struct node* root, int target) {
    if (root == NULL) {
        return root;
    }

    if (root->data == target) {
        return root;
    } else if (root-> data > target) {
        return searchElement(root->lelf, target);
    } else {
        return searchElement(root->right, target);
    }
    return NULL;
}
