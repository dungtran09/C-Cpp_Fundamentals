/*
 * C program application of singly linked list
 * Create two polynomial and add two polynomial .
 *
 * */

#include <stdio.h>
#include <stdlib.h>

struct node {
    float coefficient;
    int exponent;
    struct node *link;
};

// add polynomial
struct node *addPolynomial(struct node *head, float coeff, int expo) {
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
    int i, n, data;
    float coeff;
    int expo;
    printf("Enter number of Term for polynomial: ");
    scanf("%d", &n);
    
    for (i = 0; i < n; i++) {
        printf("Enter the coefficient for term %d: ", i+1);
        scanf("%f", &coeff);
        printf("Enter the exponent for term %d: ", i+1);
        scanf("%d", &expo);
        head = addPolynomial(head, coeff, expo);
    }

    return head;
}

// ad two polynomials
struct node *addTwoPolynomial(struct node *head1, struct node *head2) {
    struct node *ptr1 = head1;
    struct node *ptr2 = head2;
    struct node *head3 = NULL;
    
    while (ptr1 != NULL && ptr2 != NULL) {
        if (ptr1->exponent == ptr2->exponent) {
            head3 = addPolynomial(head3, ptr1->coefficient + ptr2->coefficient, ptr1->exponent);
            ptr1 = ptr1->link;
            ptr2 = ptr2->link;
        } else if (ptr1->exponent > ptr2->exponent) {
            head3 = addPolynomial(head3, ptr1->coefficient, ptr1->exponent);
            ptr1 = ptr1->link;
        } else if (ptr2->exponent > ptr1->exponent) {
            head3 = addPolynomial(head3, ptr2->coefficient, ptr2->exponent);
            ptr2 = ptr2->link;
        } 
    }

    while (ptr1 != NULL) {
        head3 = addPolynomial(head3, ptr1->coefficient, ptr1->exponent);
        ptr1 = ptr1->link;
    }
    while (ptr2 != NULL) {
        head3 = addPolynomial(head3, ptr2->coefficient, ptr2->exponent);
        ptr2 = ptr2->link;
    }

    return head3;
}

// print polynomial
void print(struct node *head) {
    struct node *ptr = NULL;
    if (head == NULL) {
        printf("There is node polynomial.\n");
    } else {
        ptr = head;
        while (ptr != NULL) {
            printf("(%1.fx^%d)", ptr->coefficient, ptr->exponent);
            ptr = ptr->link;
            if (ptr != NULL) {
                printf(" + ");
            }
        }
        printf("\n");
    }
}

int main () {
    // create first polynomial
    struct node *head1 = NULL;
    printf("FIRST POLYNOMIAL:\n");
    head1 = createPolynomial(head1);

    // create second polynomial
    struct node *head2 = NULL;
    printf("SECOND POLYNOMIAL:\n");
    head2 = createPolynomial(head2);
    
    printf("First polynomial is: ");
    print(head1);
    printf("Second polynomial is: ");
    print(head2);


    // add two polynomials
    struct node *head3 = NULL;
    head3 = addTwoPolynomial(head1, head2);

    printf("The result of add two polynomials is:\n");
    print(head3);
    return 0;
}
