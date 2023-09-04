#include <stdio.h>


/*
 * C program print Factorial of a number using recursion
 * */

int Factorial(int n) {
    
    printf("Caculating  F(%d)\n", n);
    if (n == 0) {
        return 1;
    } 
    
    int F = n * Factorial(n -1);
    
    printf("Done! - F(%d) = %d\n",n ,F);

    return F;
}

int main () {
    
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    printf("\nTotal Factorial of a number is: %d ", Factorial(n));
    
    printf("\n");
    return 0;
}
