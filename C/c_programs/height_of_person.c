#include <stdio.h>

/*
 *  C program to accept height of person in centimeter and and categorize the person base on height as 
 *  taller, dwarf, and avenge of height person. 
 * */


int main() {
    
    float height;
    printf("Enter the height (in centimeter): ");
    scanf("%f", &height);

    if (height < 150.0) {
        printf("Dwarf.\n");
    } else if (height >= 150.0 && height <= 165.0) {
        printf("Average height.\n");
    } else if (height > 165.0 && height <= 195.0) {
        printf("Taller.\n");
    } else {
        printf("Oopps! Abnomal height.\n");
    }

    return 0;
}
