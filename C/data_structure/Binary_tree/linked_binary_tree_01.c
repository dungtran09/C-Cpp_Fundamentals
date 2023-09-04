#include <stdio.h>
#include <stdlib.h>

struct node {
    struct node* left;
    int data;
    struct node*right;
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
    int data, input;
    printf("Do you want to add a node? (Enter: 0 or 1): ");
    scanf("%d", &input);
    
    if (!input) {
        return NULL;
    } else {
        struct node* newNode = malloc(sizeof(struct node));
        printf("Enter the data: ");
        scanf("%d", &data);
        newNode->data = data;
        printf("Left child of %d\n", newNode->data);
        newNode->left = createTree();
        printf("Right child of %d\n", newNode->data);
        newNode->right = createTree();

        return newNode;
    }
}

