#include <stdio.h>

/*
 * C program print multiplication table using recursion
 * */

void multiplicationTable(int num, int i) {
    // base condition to teminates
    if (i > 10) {
        return;
    }

    printf("%d x %d = %d\n", num, i , num*i);
    multiplicationTable(num, ++i);
}

int main () {
    
    int i = 1, num;

    printf("Enter a number: ");
    scanf("%d", &num);

    multiplicationTable(num, i);
    
    return 0;
}
