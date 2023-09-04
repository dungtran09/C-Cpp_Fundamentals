#include <stddef.h>
#include <stdio.h>
#include <string.h>
/*
 * C program read string and find the number of all digits in the string.
 * */

int sum(char *str) {
    size_t i; 
    int sum = 0;
    size_t len = strlen(str);

    for (i = 0; i < len; i++) {
        if (str[i] >= '0' && str[i] <= '9') {
            sum += (str[i] - '0');
        } 
    }
    return sum;
}

int main () {

    char str[100];
    printf("Enter string: ");
    
    fgets(str, sizeof(str), stdin);

    printf("The sum of numbers in the string is : %d\n", sum(str));

    
    return 0;
}
