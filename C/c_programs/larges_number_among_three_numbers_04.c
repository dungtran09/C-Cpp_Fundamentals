#include <stdio.h>

/*
 * C program to find the biggest of three numbers  using function.
 * */

int biggest(int a, int b) {
    if (a > b) {
        return  a;
    }

    return b;
}

int main () {
    
    int a, b ,c;

    printf("Enter three numbers: ");
    scanf("%d %d %d",&a,&b,&c);

    printf("%d is largest of all three numbers.\n", biggest((a, b), c));
    
    return 0;
}
