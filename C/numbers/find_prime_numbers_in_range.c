#include <stdio.h>
#include <stdlib.h>
/*
 * C program find prime numbers in a given ranger.
 * */


int main() {

    int i, j, num1, num2, flag, count = 0;

    printf("Enter value of num1 and num2: ");
    scanf("%d %d", &num1, &num2);

    printf("Prime numbers: ");
    
    for (i=num1 + i; i<num2; ++i ) {
        flag = 0;
        for (j=2; j<=i/2 ; ++j) {  
            if ((i%j) == 0) {
                flag = 1;
                break;
            }
        }

        if (flag == 0) {
            printf("%d ", i);
            count++;
        }
    }

    
    printf("\nNumber of primes between %d & %d is: %d\n", num1, num2, count);
    
    return 0;
}
