#include <stdio.h>
#include <string.h>

/*
 * C program to check whether a give string is Palindrome or not.
 * using Recursion
 * */

int check(char [], int);

int main() {

    char word[15];

    printf("Enter a work to check if it is a Palindrome: ");
    scanf("%s", word);

    if (check(word, 0)) {
        printf("The entered work is a Palindrome.\n");
    } else {
        printf("The entered work is NOT a Palindrome.\n");
    }
    
    printf("\n");

    return 0;
}

int check(char work[], int index) {
    int len = strlen(work) - (index + 1);

    if (work[index] == work[len]) {
        if (index  + 1 == len || index == len) {
            return 1;
        }
        check(work, index + 1);
    }
    return 0;
}
