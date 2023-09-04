#include <stdio.h>

/*
 * C program to find largest number of three numbers using ternary operator 
 * */

int main() {
    

    int a, b, c;

    printf("Enter three numbers: ");  
    scanf("%d %d %d", &a, &b, &c);

    printf("Largest of three numbers is: %d\n", (a > b ? (a > c ? a : c) : (b > c ? b : c)));

    return 0;
}
