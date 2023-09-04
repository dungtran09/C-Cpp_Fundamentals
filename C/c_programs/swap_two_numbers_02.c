#include <stdio.h>

/*
 * C program swap values of two variable without using any temporary variable
 * */

void Swap(int *ptr1, int *ptr2) {
    
    *ptr1 = *ptr1 + *ptr2;
    *ptr2 = *ptr1 - *ptr2;
    *ptr1 = *ptr1 - *ptr2;
}

int main() {

    int m, n;

    printf("Enter first number: ");
    scanf("%d", &m);

    printf("Enter second number: ");
    scanf("%d", &n);

    printf("Before swap: M = %d and N = %d\n",m, n);

    Swap(&m, &n);

    printf("After swap: M = %d and N = %d\n", m, n);

    return 0;
}
