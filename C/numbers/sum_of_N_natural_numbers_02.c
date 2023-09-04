#include <stdio.h> 
/*
* C program find the sum of N natural numbers using while loop
*/

int main() {
    
    int i, n, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &n);

    i = 1;
    while (i <= n) {
        sum += i;
        i++;
    }

    printf("Sum of first %d number is: %d\n", n, sum);

    return 0;
}
