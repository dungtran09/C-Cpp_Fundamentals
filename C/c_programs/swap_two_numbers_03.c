#include <stdio.h>

/*
 * C program to read two number and swap their values 
 * using bitwise operator
 */
    
void Swap(long *ptr1, long *ptr2) { 
    *ptr1 = *ptr1 ^ *ptr2;
    *ptr2 = *ptr1 ^ *ptr2;
    *ptr1 = *ptr1 ^ *ptr2;
}


int main() {

    long a, b;

    printf("Enter first number: ");
    scanf("%ld", &a);
    printf("Enter second number: ");
    scanf("%ld", &b);

    printf("Before swap: a = %ld, b = %ld\n", a, b);

    Swap(&a, &b);

    printf("After swap: a = %ld, b = %ld\n", a, b);

    return 0;
}
