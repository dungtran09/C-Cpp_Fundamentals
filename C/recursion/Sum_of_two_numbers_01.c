/*
 * C program caculato sum of two number using recurcuson
 * */

#include <stdio.h>

int sum(int x, int y) {
    
    if (y == 0) {
        return x;
    }

    return 1 + sum(x, y-1);
}


int main () {

    int x = 10;
    int y = 5;
    int result;

    result = sum(x, y);

    printf("sum of two number is: %d\n", result);

    return 0;
}
