#include <stdio.h>
#include <stdlib.h>

struct node {
    struct node* leftPtr;
    char data;
    struct node* rightPtr;
};

struct node* createNode(char);
struct node* contructBinaryTree(char[], char[], int, int);
int searchIndex(char[], char, int, int);
void printBinaryTree(struct node*);

int main(int argc, char *argv[]) {

    // char preArr[] = {'A', 'B', 'D', 'E', 'C', 'F'};
    // char inArr[] = {'D', 'B', 'E', 'A', 'F', 'C'};
    
    char preArr[] = {'A', 'B', 'D', 'E', 'C'};
    char inArr[] = {'D', 'B', 'E', 'A', 'C'};

    struct node* root = NULL;
    
    int inArr_length = sizeof(inArr) / sizeof(inArr[0]);
    
    root = contructBinaryTree(preArr, inArr, 0, inArr_length - 1);
    printBinaryTree(root);
     
    printf("\n");

    return EXIT_SUCCESS;
}

struct node* createNode(char data) {
    struct node* newNode = malloc(sizeof(struct node));
    newNode->leftPtr = NULL;
    newNode->data = data;
    newNode->rightPtr = NULL;
    
    return newNode;
}

struct node* contructBinaryTree(char preArr[], char inArr[], int inArr_startIndex, int inArr_endIndex) {
    static int preArr_CurrentIndex = 0;

    struct node* tempPtr = createNode(preArr[preArr_CurrentIndex]);
    preArr_CurrentIndex++;

    if (inArr_startIndex == inArr_endIndex) {
        return tempPtr;
    }
    
    int inArr_CurrentIndex = searchIndex(inArr, tempPtr->data, inArr_startIndex, inArr_endIndex);

    tempPtr->leftPtr = contructBinaryTree(preArr, inArr, inArr_startIndex, inArr_CurrentIndex - 1);
    tempPtr->rightPtr = contructBinaryTree(preArr, inArr, inArr_CurrentIndex + 1, inArr_endIndex);
    
    return tempPtr;
}

int searchIndex(char inArr[], char target, int inArr_startIndex, int inArr_endIndex) {
    int i;
    for (i = inArr_startIndex; i <= inArr_endIndex; i++) {
        if (inArr[i] == target) {
            return i;
        }
    }
    return -1;
}

void printBinaryTree(struct node* root) {
    if (root == NULL) {
        return;
    }
    printf("%c ", root->data);
    printBinaryTree(root->leftPtr);
    printBinaryTree(root->rightPtr);
}
