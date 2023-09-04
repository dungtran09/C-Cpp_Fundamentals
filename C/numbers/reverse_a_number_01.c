/*
 * C program read a number and reverse the order that number using for loop
 * */
#include <stdio.h>

int main() {
    
    int n, rem, reverse;

    printf("Enter a numner: ");
    scanf("%d", &n);
    
    while (n > 0) {
        rem = n % 10;
        reverse = reverse * 10 + rem;
        n/= 10;
    }

    printf("The number after reverse is: %d\n", reverse);

    return 0;
}
