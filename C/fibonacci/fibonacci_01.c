/*
 * C program find sersies, using while loop to genarate n fibonaccis
 * */

#include <stdio.h>

int main() {
    int fib1 = 0, fib2 = 1, fib3, limit, count = 0; 
    

    printf("Eneter limit to genarate sersies fibonacci: ");
    scanf("%d", &limit);
    
    printf("%d ", fib1);
    printf("%d ", fib2);
    
    count = 2;
    while (count < limit) {
        fib3 = fib1 + fib2;
        printf("%d ", fib3);
        
        fib1 = fib2;
        fib2 = fib3;

        count++;
    }
    
    printf("\n");

    return 0;
}
