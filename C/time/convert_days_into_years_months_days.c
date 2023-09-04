/*
 * C program read input as the n days after that convert into number of years, months nad days. 
 * */

#include <stdio.h>

#define DAY_IN_WEEK 7

int main () {

    int ndays, years, months, days;

    printf("Enter the days to convert: ");
    scanf("%d",&ndays);

    years = (ndays / 365);
    months = (ndays % 365) / DAY_IN_WEEK;
    days = (ndays % 365) % DAY_IN_WEEK;

    printf("%d is equavalent %d years, %d months and %d days.\n", ndays, years, months, days);

    return 0;
}
