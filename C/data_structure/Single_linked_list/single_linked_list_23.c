/*
 * C program application of singly linked list
 * Create two polynomial and multipli two polynomials together
 * */

struct node {
    float coefficient;
    int exponent;
    struct node *link;
};


#include <stdio.h>
#include <stdlib.h>

// insert polynomial
struct node *insertPolynomial(struct node *head, float coeff, int expo) {
    struct node *newP = (struct node*)malloc(sizeof(struct node));
    newP->coefficient = coeff;
    newP->exponent = expo;

    if (head == NULL || head->exponent < expo) {
        newP->link = head;
        head = newP;
        return head;
    } else {
        struct node *temp = head;
        while (temp->link != NULL && temp->link->exponent > expo) {
            temp = temp->link;
        }
        newP->link = temp->link;
        temp->link = newP;
    }
    return head;
}

// mutil two polynomials
struct node *mutilTwoPolynomial(struct node *head1, struct node *head2) {
    struct node *ptr1 = head1;
    struct node *ptr2 = head2;
    struct node *head3 = NULL;
    
    if (head1 == NULL || head2 == NULL) {
        printf("Zero polynomial.\n");
        exit(1);
    }

    while (ptr1 != NULL) {
        ptr2 = head2;
        while (ptr2 != NULL) {
            head3 = insertPolynomial(head3, ptr1->coefficient * ptr2->coefficient, ptr1->exponent + ptr2->exponent);
            ptr2 = ptr2->link;
        }
        ptr1 = ptr1->link;
    }
    // add the like term
    struct node *ptr3 = head3;
    struct node *temp = NULL;

    while (ptr3->link != NULL) {
        if (ptr3->exponent == ptr3->link->exponent) {
            ptr3->coefficient = ptr3->coefficient + ptr3->link->coefficient;
            temp = ptr3->link;
            ptr3->link = ptr3->link->link;
            free(temp);
        } else {
            ptr3 = ptr3->link;
        }
    }

    return head3;
}

// print polynomial
void printPolynomial(struct node *head) {
    if (head == NULL) {
        printf("There is no polynomial.\n");
    } else {
        struct node *ptr = head;
        while (ptr != NULL) {
            printf("(%.1fx^%d)", ptr->coefficient, ptr->exponent);
            ptr = ptr->link;
            if (ptr != NULL) {
                printf(" + ");
            }
        }
        printf("\n");
    }
}

// add polynomial
struct node *addPolynomial(struct node *head) {
    int i,n, data;
    float coeff;
    int expo;
    
    printf("Enter number of term: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("Enter the coefficient for term %d: ", i+1);
        scanf("%f", &coeff);
        printf("Enter the exponent for term %d: ", i+1);
        scanf("%d", &expo);
        head = insertPolynomial(head, coeff, expo);
    }
    return head;
}

int main () {
    
    // create first polynomial
    struct node *head1 = NULL;
    printf("FIRST POLYNOMIAL:\n");
    head1 = addPolynomial(head1);

    
    // create second polynomial
    struct node *head2 = NULL;
    printf("SECOND POLYNOMIAL:\n");
    head2 = addPolynomial(head2);

    printf("Pol1: ");
    printPolynomial(head1);
    printf("Pol2: ");
    printPolynomial(head2);

    // mul two polynomial
    struct node *head3 = NULL;
    head3 = mutilTwoPolynomial(head1, head2);
    printf("Result of mul two pol: ");
    printPolynomial(head3); 
    return 0;
}
