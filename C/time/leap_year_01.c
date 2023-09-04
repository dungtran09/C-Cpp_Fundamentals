/*
 * C program check whether agiven year is a leap year or common year.
 * */

#include <stdio.h>

int main () {

    int year;
    printf("Enter a year: ");
    scanf("%d", &year);
    

    if (year % 4 != 0) {
        printf("%d is a comon year.\n", year);
    } else if (year % 100 != 0) {
        printf("%d is leap year.\n", year);
    } else if (year % 400 != 0) {
        printf("%d is a common year.\n", year);
    } else {
        printf("%d is a leap year.\n", year);
    }
    
    // if (year is not divisible by 4) then (it is a common year)
    // else if (year is not divisible by 100) then (it is a leap year)
    // else if (year is not divisible by 400) then (it is a common year)
    // else (it is a leap year)

    return 0;
}
