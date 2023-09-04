#include <stdio.h>
#include <stdlib.h>

struct node {
    struct node* leftPtr;
    int data;
    struct node* rightPtr;
};

struct node* createNode(char);
int heightBinaryTree_v1(struct node*);
int heightBinaryTree_v2(struct node*);
int max(int, int);

int main(int argc, char *argv[]) {
    struct node* root = NULL;
    root = createNode('a');
    root->leftPtr = createNode('b');
    root->rightPtr = createNode('e');
    root->leftPtr->leftPtr = createNode('c');
    root->leftPtr->rightPtr = createNode('d');
    root->leftPtr->leftPtr->leftPtr = createNode('e');
    root->rightPtr->leftPtr = createNode('f');

    int heightBT_v1 = heightBinaryTree_v1(root);
    int heightBT_v2 = heightBinaryTree_v1(root);
    printf("%d\n", heightBT_v1);
    printf("%d\n", heightBT_v2);

    return EXIT_SUCCESS;
}

struct node* createNode(char data) {
    struct node* tempPtr = malloc(sizeof(struct node));
    tempPtr->leftPtr = NULL;
    tempPtr->data = data;
    tempPtr->rightPtr = NULL;

    return tempPtr;
}

int heightBinaryTree_v1(struct node* root) {
    if (root == NULL) {
        return 0;
    };

    struct node* currentNode = root;
    
    if (currentNode->leftPtr == NULL && currentNode->rightPtr == NULL) {
        return 0;        
    }
    
    int left = heightBinaryTree_v1(currentNode->leftPtr);
    int right = heightBinaryTree_v1(currentNode->rightPtr);

    if (left > right) {
        return left + 1;
    } else {
        return right + 1;
    }
}

int heightBinaryTree_v2(struct node* root) {
    int value;
    if (root == NULL) {
        return 0;
    }

    if (root->leftPtr != NULL) {
        value = 1 + heightBinaryTree_v2(root->leftPtr);
    }

    if (root->rightPtr != NULL) {
        value = max(value, (1 + heightBinaryTree_v2(root->rightPtr)));
    }

    return value;
}

int max(int firstNumber, int secondNumber) {
    if (firstNumber > secondNumber) {
        return firstNumber;
    }
    return secondNumber;
}
