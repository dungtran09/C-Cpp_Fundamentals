#include <stdio.h>
#include <stdlib.h>

struct node {
    struct node* leftChild;
    int data;
    struct node* rightChild;
};

struct node* createNode(int);
int countLeaf(struct node*);

int main(int argc, char *argv[]) {
    struct node* root = NULL;
    root = createNode(1);
    root->leftChild = createNode(2);
    root->rightChild = createNode(3);
    root->leftChild->leftChild = createNode(4);
    root->leftChild->rightChild = createNode(5);
    root->rightChild->leftChild = createNode(6);
    root->rightChild->rightChild = createNode(7);

    int result = countLeaf(root);
    printf("Number of leaf: %d\n", result);

    return EXIT_SUCCESS;
}

struct node* createNode(int data) {
    struct node* tempPtr = malloc(sizeof(struct node));
    tempPtr->leftChild = NULL;
    tempPtr->data = data;
    tempPtr->rightChild = NULL;

    return tempPtr;
}

int countLeaf(struct node* root) {
    int count = 0;

    if (root != NULL) {
        if ((root->leftChild == NULL) && root->rightChild == NULL) {
            return 1;
        } else {
            count = count + countLeaf(root->leftChild) + countLeaf(root->rightChild);
        }
    }
    return count;
}
