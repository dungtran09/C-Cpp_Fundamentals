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
    
    char preArray[] = {'A', 'B', 'D', 'E', 'C', 'F'};
    char inArray[] = {'D', 'B', 'E', 'A', 'F', 'C'};
    
    // char preArray[] = {'A', 'B', 'D', 'E', 'C'};
    // char inArray[] = {'D', 'B', 'E', 'A', 'C'};
    
    int inArray_length = sizeof(inArray) / sizeof(inArray[0]);
    struct node* root = contructBinaryTree(preArray, inArray, 0, inArray_length - 1);

    printBinaryTree(root);

    printf("\n");

    return EXIT_SUCCESS;
}

struct node* createNode(char data) {
    struct node* tempPtr = malloc(sizeof(struct node));
    tempPtr->leftPtr = NULL;
    tempPtr->data = data;
    tempPtr->rightPtr = NULL;

    return tempPtr;
}

struct node* contructBinaryTree(char preArray[], char inArray[], int inArray_startIndex, int inArray_endIndex) {
    static int preArray_currentIndex = 0;

    if (inArray_startIndex > inArray_endIndex) {
        return NULL;
    }

    struct node* tempPtr = createNode(preArray[preArray_currentIndex]);
    preArray_currentIndex++;

    if (inArray_startIndex == inArray_endIndex) {
        return tempPtr;
    }

    int inArray_currentIndex = searchIndex(inArray, tempPtr->data, inArray_startIndex, inArray_endIndex);
    tempPtr->leftPtr = contructBinaryTree(preArray, inArray, inArray_startIndex, inArray_currentIndex - 1);
    tempPtr->rightPtr = contructBinaryTree(preArray, inArray, inArray_currentIndex + 1, inArray_endIndex);

    return tempPtr;
}

int searchIndex(char inArray[], char tartget, int inArray_startIndex, int inArray_endIndex) {
    int i;
    for (i = inArray_startIndex; i <= inArray_endIndex ; i++) {
        if (inArray[i] == tartget) {
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

