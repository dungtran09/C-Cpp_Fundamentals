/*
 * C program find sum of N first natural number using array.
 * */

#include <stdio.h>

int main() {
    
    int i, n, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &n);

    int array[n];
    
    for (i = 0; i <= n; i++) {
        array[i] = i + 1;
    }

    for (i = 0; i < n; i++) {
        sum += array[i];
    }

    printf("Sum of %d first natural number is: %d\n",n , sum);
    

    return 0;
}
