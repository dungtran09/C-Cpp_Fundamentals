#include <stdio.h>

/*
 * C program swap contents of two numbers using bitwise XOR operator
 * */

void main() {


    long i, k;

    printf("Enter two integers: ");
    scanf("%ld %ld", &i, &k);

    printf("Before swap: i = %ld, k = %ld\n", i, k);

    i = i ^ k;
    k = i ^ k;
    i = i ^ k;

    printf("After swap: i = %ld, k = %ld\n", i, k);
}
