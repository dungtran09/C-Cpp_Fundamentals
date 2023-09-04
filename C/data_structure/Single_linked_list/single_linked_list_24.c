/*
 * C program application of singly linked 
 * Create two linked list n-digits and add two number in a new singly linked list
 * */

#include <stdio.h>
#include <stdlib.h>

struct node {
    int num;
    struct node *link;
};

// insert n-digit into linked list
struct node *insertNum(struct node *head, int n) {
    struct node *newP = (struct node*)malloc(sizeof(struct node));
    newP->num = n;
    newP->link = NULL;

    newP->link = head;
    head = newP;
    return head;
}

// create linked list n-digits
struct node *createNumber(struct node *head, int num) {
    
    while (num != 0) {
        head = insertNum(head, num%10);
        num /= 10;
    }

    return head;
}

// reverse linked list
struct node *reverseLinkedList(struct node *head) {

    if (head == NULL) {
        return head;
    }
    struct node *current = NULL;
    struct node *next = head->link;
    head ->link = NULL;

    while (next != NULL) {
        current = next;
        next = next->link;
        current->link = head;
        head = current;
    }

    return head;
}


// add two number 
struct node *addTwoNumbers(struct node *head1, struct node *head2) {
    if (head1->num == 0) {
        return head2;
    }
    if (head2->num == 0) {
        return head1;
    }

    struct node *ptr1 = head1;
    struct node *ptr2 = head2;
    struct node *head3 = NULL;
    int sum = 0, carry = 0;
    while (ptr1 || ptr2) {

        sum = 0;

        if (ptr1) 
            sum += ptr1->num;
        
        if (ptr2) 
            sum += ptr2->num;
        
        sum += carry;
        carry = sum / 10;
        sum = sum % 10;

        head3 = insertNum(head3, sum);

        if (ptr1) 
            ptr1 = ptr1->link;
       
        if (ptr2) 
            ptr2 = ptr2->link;
        
    }
    if (carry) {
        head3 = insertNum(head3, carry);
    } 

    return head3;
}


// print linked list 
void printNum(struct node *head) {
    if (head == NULL) {
        printf("The linked list is empty.\n");
    } else {
        struct node *ptr = head;
        while (ptr->link != NULL) {
            printf("%d", ptr->num);
            ptr = ptr->link;
            if (ptr) {
                printf(" - ");
            }
        }
        printf("%d", ptr->num);
    }
    printf("\n");
}

int main () {

    // n-digit for first number
    struct node *head1 = NULL;
    int num1;
    printf("Enter first num: ");
    scanf("%d", &num1);
    head1 = createNumber(head1, num1);
    printf("Represent for num1: ");
    printNum(head1);
    printf("Reverse for num1  : ");
    head1 = reverseLinkedList(head1);
    printNum(head1);

    puts("\n");

    // n-digits for seacond number
    struct node *head2 = NULL;
    int num2;
    printf("Enter seacond num: ");
    scanf("%d", &num2);
    head2 = createNumber(head2, num2);
    printf("Represent for num2: ");
    printNum(head2);
    printf("Reverse for num2  : ");
    head2 = reverseLinkedList(head2);
    printNum(head2); 

    // add two numbers 
    struct node *head3 = NULL;
    head3 = addTwoNumbers(head1, head2);
    
    puts("\n");
    // print result
    printf("Result of add two numbers : ");
    printNum(head3);

    return 0;
}
