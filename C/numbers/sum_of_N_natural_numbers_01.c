#include <stdio.h>

/*
 *  C program find sum of N natural numbers using for loop
 * */


int main() {
    
   int i, n, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        sum += i;
    }

    printf("Total of %d number is: %d\n", n, sum);

    return 0;
}
