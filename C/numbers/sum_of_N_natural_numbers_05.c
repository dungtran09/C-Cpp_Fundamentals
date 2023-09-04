/*
 * C program read a number and caculator sum of n first natural number using recursion
 * */

#include <stdio.h>

int Sum(int n) {
    
    if (n == 1) {
        return 1;
    } else {
        return n + (Sum(n-1));
    }

}

int main() {
    
    int n, result;

    printf("Enter a numner: ");
    scanf("%d", &n);
    
    result = Sum(n);

    printf("Sum of %d first natural number is: %d\n", n, result);


    return 0;
}
