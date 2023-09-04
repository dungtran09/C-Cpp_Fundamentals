#include <stdio.h>
#include <stdlib.h>

struct node {
    struct node* leftChild;
    int data;
    struct node* rightChild;
};

struct node* createNode(int);
int isBalancedBT(struct node*);
int heightBT(struct node*);


int main(int argc, char *argv[]) {
    struct node* root = NULL;
    root = createNode(50);
    root->leftChild = createNode(40);
    root->rightChild = createNode(60);
    root->rightChild->leftChild = createNode(55);
    // root->rightChild->leftChild->rightChild = createNode(57);
    

    if (isBalancedBT(root)) {
        printf("It is a Balenced Binary Tree.\n");
    } else {
        printf("It NOT a Balenced Binary Tree.\n");
    }
 
    return EXIT_SUCCESS;
}

struct node* createNode(int data) {
    struct node* tempPtr = malloc(sizeof(struct node));
    tempPtr->leftChild = NULL;
    tempPtr->data = data;
    tempPtr->rightChild = NULL;
    return tempPtr;
}

int isBalancedBT(struct node* root) {
    int left = 0, right = 0, leftHight = 0, rightHight = 0;
    int different = 0;

    if (root == NULL) {
        return 1;
    }

    left = isBalancedBT(root->leftChild);
    right = isBalancedBT(root->rightChild);

    if (left && right) {
        leftHight = heightBT(root->leftChild);
        rightHight = heightBT(root->rightChild);

        different = abs((leftHight + 1) - (rightHight + 1));

        if (different <= 1) {
            return 1;
        }
    }
    return 0;
}

int heightBT(struct node* root) {
    if (root == NULL) {
        return -1;
    }

    if ((root->leftChild == NULL) && (root->rightChild == NULL)) {
        return 0;
    }

    int left = heightBT(root->leftChild);
    int right = heightBT(root->rightChild);
    
    if (left > right) {
        return left + 1;
    } else {
        return right + 1;
    }
}


