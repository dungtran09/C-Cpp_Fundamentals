#include <stdio.h>

/*
 * C program increment by 1 for all digits in a given number. 
 * */

int Incre(int n) {
    int i, raim, sum = 0;

    while (n) {
        raim = n % 10;
        sum += (raim + 1);
        n /= 10;
    }

    return sum;
}

int main () {
    
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    // After increment by 1

    printf("Increment by 1 on all digits: %d\n", Incre(n));
    
    return 0;
}
