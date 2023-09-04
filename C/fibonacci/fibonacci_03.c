/*
 * C program genarate Fibonacci using Tabulation
 * */

#include <stdio.h>

int main () {
    
    int limit;
    printf("Enter the limit to genarate Fibonacci serise: ");
    scanf("%d", &limit);

    int a[limit];

    if (limit > 2) {
        a[0] = 0;
        a[1] = 1;

        for (int i = 2; i <= limit; i++) {
            a[i] = a[i-1] + a[i-2];
        }
    }

    printf("The Fibonacci series is: ");
    
    for (int i = 0; i <= limit; i++) {
        printf("%d ", a[i]);
    }

    printf("\n");
    return 0;


}
