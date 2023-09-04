#include <stdio.h>

/*
 * C program to swap the values of two values.
 * Read two integers M and N and swap two their values
 * */

void Swap(int *ptr1, int *ptr2) {
    float temp;
    temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
}

int main() {
    
    float m, n ;

    // get two number 
    printf("Enter the value of M (Accepted decimal value): ");
    scanf("%f", &m);
    printf("Enter the value of N (Accepted decimal value): ");
    scanf("%f", &n);
    
    printf("\n");

    printf("Before swapping: M = %5.2f  and N = %5.2f\n", m, n);

    // func swappin, pass address to func
    Swap(&m, &n);

    printf("After swapping: M = %5.2f and N = %5.2f\n", m, n);

    return 0;
}
