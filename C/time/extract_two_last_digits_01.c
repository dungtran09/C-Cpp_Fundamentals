/*
 * C program extract two digits of a given year
 * */

#include <stdio.h>

int main() {
    
    int year, extract_year;

    printf("Enter year: ");
    scanf("%d", &year);

    extract_year = year % 100;

    printf("Last two digits of year is: %02d\n", extract_year);

    return 0;
}
