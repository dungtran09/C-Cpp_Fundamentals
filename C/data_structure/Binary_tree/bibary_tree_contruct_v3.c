#include <stdio.h>
#include <stdlib.h>

struct node {
    struct node* leftPtr;
    char data;
    struct node *rightPtr;
};

struct node* createNode(char);
struct node* constructBinaryTree(char[], char[], int, int, int*);
int searchIndex(char[], char, int, int);
void printBinaryTree(struct node*);

int main(int argc, char *argv[]) {
    char postArray[] = {'D', 'E', 'B', 'F', 'C', 'A'};
    char inArray[] = {'D', 'B', 'E', 'A', 'F', 'C'};
    
    int inArray_startIndex = 0;
    int inArray_length = (sizeof(inArray) / sizeof(inArray[0])) - 1;
    int* postArray_endIndex = &inArray_length; 
    struct node* root = constructBinaryTree(postArray, inArray, inArray_startIndex, inArray_length, postArray_endIndex);
    
    printBinaryTree(root);
    printf("\n");
    return EXIT_SUCCESS;

}

struct node* constructBinaryTree(char postArray[], char inArray[], int inArray_startIndex, int inArray_endIndex, int* postArray_endIndex) {
    int* postArray_currentIndex = postArray_endIndex;

    if (inArray_startIndex > inArray_endIndex) {
        return NULL;
    }
    
    struct node* tempPtr = createNode(postArray[*postArray_currentIndex]);
    (*postArray_currentIndex)--;

    if (inArray_startIndex == inArray_endIndex) {
        return tempPtr;
    }

    int inArray_currentIndex = searchIndex(inArray, tempPtr->data, inArray_startIndex, inArray_endIndex);
    tempPtr->rightPtr = constructBinaryTree(postArray, inArray, inArray_currentIndex + 1, inArray_endIndex, postArray_currentIndex);
    tempPtr->leftPtr = constructBinaryTree(postArray, inArray, inArray_startIndex, inArray_currentIndex - 1, postArray_currentIndex);
    
    return tempPtr;
}

int searchIndex(char inArray[], char target, int inArray_startIndex, int inArray_endIndex) {
    for (int i = inArray_startIndex; i <= inArray_endIndex; i++) {
        if (inArray[i] == target) {
            return i;
        }
    }
    return -1;
}

struct node* createNode(char data) {
    struct node* tempPtr = malloc(sizeof(struct node));
    tempPtr->leftPtr = NULL;
    tempPtr->data = data;
    tempPtr->rightPtr = NULL;

    return tempPtr;
}

void printBinaryTree(struct node* root) {
    if (root == NULL) {
        return;
    }
    printBinaryTree(root->leftPtr);
    printBinaryTree(root->rightPtr);
    printf("%c ", root->data);
}
