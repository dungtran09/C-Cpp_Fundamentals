#include <stdio.h>

/*
 * C program multiplication table using while loop
 * */


int main() {

    int i, n;
    
    printf("Enter a number: ");
    scanf("%d", &n);


    i = 1;
    while (i <= 10) {
        printf("%d x %d = %d\n", n, i, n*i);
        i++;
    }


    return 0;
}
