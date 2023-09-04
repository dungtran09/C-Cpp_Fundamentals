#include <stdio.h>

/*
 * C program read threen numbers and find largest number using ternary operato
 * */


int main() {
    
    int n1, n2, n3, compare;
    printf("Enter three number: ");

    scanf("%d %d %d", &n1, &n2, &n3);
    
    compare = (n1 > n2) ? (n1 > n3 ? n1 : n3) : (n2 > n3 ? n2 : n3);

    printf("%d is largest number.\n", compare);
    return 0;
}
