/*
 * C program to reverse a number using recursion
 * */

#include <stdio.h>

int reverse_num(int n, int rev) {
    if (n == 0)
        return rev;

    rev = (rev * 10) + (n % 10);
    return reverse_num(n/10, rev);
} 

int main () {
    
    int n, rev = 0;
    int res;
    printf("Enter a number: ");
    scanf("%d", &n);


    res = reverse_num(n, rev);
    
    printf("The reverse number is: %d\n", res);
    
    return 0;
}
