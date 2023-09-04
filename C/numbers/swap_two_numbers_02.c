#include <stdio.h>

/*
 * C program read two numbers and swap numbers using bitwise operator
 * */

void Swap(int *ptr1, int *ptr2) {
    *ptr1 = *ptr1 + *ptr2;
    *ptr2 = *ptr1 - *ptr2;
    *ptr1 = *ptr1 - *ptr2;
}

int main() {
    
    int n1, n2;
     
    printf("Enter two numbers: ");
    scanf("%d %d", &n1, &n2);

    printf("Before swap: n1 = %d, n2 = %d\n",n1 ,n2);

    Swap(&n1, &n2);
    
    printf("After swap: n1 = %d, n2 = %d\n",n1, n2);
    
    return 0;
}
