/*
 * C program read number and genarate the series fibonacci to the number has readed. using for loop
 * */

#include <stdio.h>

int main () {
    int i, limit, first_Term = 0, second_Term = 1, following_Term;

    printf("Enter the number of term of Fibonacci series: ");
    scanf("%d", &limit);

        
    printf("The Fibonacci series: ");
    
    if (limit >= 1) printf("%d ", first_Term);
    if (limit >= 2) printf("%d ", second_Term);

    for (i = 3; i <= limit; i++) {
        following_Term = first_Term + second_Term;
        printf("%d ", following_Term);

        first_Term = second_Term;
        second_Term = following_Term;
    }

    
    printf("\n");
    

    return 0;

}
