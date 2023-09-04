/*
 * C program - Data structure tree - Implement binary tree using linked
 * */

#include <stdio.h>
#include <stdlib.h>

struct node {
    struct node* left;
    int data;
    struct node* right;
};

struct node* createTree();

int main(int argc, char *argv[]) {

    struct node* root = createTree();
    
    printf("%d ", root->data);
    printf("%d ", root->left->data);
    printf("%d ", root->right->data);
    
    printf("\n");

    return EXIT_SUCCESS;
}

struct node* createTree() {
    int input, data;
    printf("Do you want to add node? (0 for NO and 1 for YES): ");
    scanf("%d", &input);

    if (!input) {
        return NULL;
    } else {
        struct node* newNode = malloc(sizeof(struct node));

        printf("Enter data for node: ");
        scanf("%d", &data);
        newNode->data = data;

        printf("Left child of %d\n", newNode->data);
        newNode->left = createTree();

        printf("Right child of %d\n", newNode->data);
        newNode->right = createTree();

        return newNode;
    }
}
