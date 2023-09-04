#include <stdio.h>

/*
 * C program to read two number and swap the values of two variable.
 * */

void Swap(int *ptr1, int *ptr2) {
    int temp;
    temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
}

int main() {
    
    int n, m;
    
    printf("Enter two numbers: ");
    scanf("%d %d", &m, &n);

    printf("Before swap: m = %d, n = %d\n",m, n);

    Swap(&m, &n);
    
    printf("After swap: m = %d, n = %d\n",m, n);


    return 0;
}
