#include <stdio.h>

/*
 * C program to find the sum of Even numbers and sum of Oll number from 1 to N
 *
 * */


int main () {
    
    int i, n, even_sum = 0, oll_sum = 0;

    printf("Enter a number: ");
    scanf("%d", &n);
    
    // print sumber from 1 to n;
    
    for (i = 1; i <= n; i++) {
        printf("%d ", i);
    }

    printf("\n");

    for (i = 1; i <= n; i++) {
        if (i % 2 == 0) {
            even_sum = even_sum + i;
        } else {
            oll_sum = oll_sum + i;
        }
    }

    printf("Sum of all Even numbers is: %d\n", even_sum);
    printf("Sum of all Oll numbers is: %d\n", oll_sum);

    return 0;
}
