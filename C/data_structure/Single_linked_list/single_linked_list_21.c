/*
 * Singly linked list.
 * Application of Singly linked list
 * */

#include <stdio.h>
#include <stdlib.h>

struct node {
    float coefficient;
    int exponent;
    struct node *link;
};


// inset polynomial
struct node *insertPolynomial(struct node *head, float coeff, int expo) {
    struct node *newP = (struct node*)malloc(sizeof(struct node));
    newP->coefficient = coeff;
    newP->exponent = expo;
    newP->link = NULL;
    
    struct node *temp = NULL;
    
    if (head == NULL || head->exponent < expo) {
        newP->link = head;
        head = newP;
        return head;
    } else {
        temp = head;
        while (temp->link != NULL && temp->link->exponent > expo) {
            temp = temp->link;
        }
        newP->link = temp->link;
        temp->link = newP;
    }
    return head;
}

// create polynomial
struct node *createPolynomial(struct node *head) {
    int i, n;
    float coefficient;
    int exponent;
    
    printf("Enter the number of Term: ");
    scanf("%d", &n);
    
    for (i = 0; i < n; i++) {
        printf("Enter the coefficient for term %d: ", i+1);
        scanf("%f", &coefficient);
        printf("Enter the exponent for term %d: ", i+1);
        scanf("%d", &exponent);

        head = insertPolynomial(head, coefficient, exponent);
    }
    return head;

}

// print polynomial
void print(struct node *head) {
    if (head == NULL) {
        printf("There is no polynomial.\n");
    } else {
        struct node *ptr = head;
        while (ptr != NULL) {
            printf("(%.1fx^%d) ", ptr->coefficient, ptr->exponent);
            ptr = ptr->link;
            if (ptr != NULL) printf(" + "); 
        }
        printf("\n");
    }
}

int main() {
    
    struct node *head = NULL;
    head = createPolynomial(head);
    
    // print polynomial
    struct node *ptr = head;
    print(ptr);

    return 0;
}
