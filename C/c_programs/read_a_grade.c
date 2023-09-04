#include <stdio.h>
/*
 * C program to accept grade and declare the equavlent description
 * */

int main () {

    char remark[15];
    char grade;
    
    printf("Enter the grade: ");
    scanf("%c", &grade);

    grade = toupper(grade);

    switch (grade) {
        case 'S': 
            strcpy(remark, " SUPPER");
            break;
        case 'A':
            strcpy(remark, " VEEY GOOD");
            break;
        case 'B':
            strcpy(remark, " FAIR");
            break;
        case 'Y':
            strcpy(remark, " ABSENT");
            break;
        case 'F':
            strcpy(remark, " FAILS");
            break;
        default :
            strcpy(remark, " ERROR IN GRADE");
            break;
    } 

    printf("RESULT: %s\n", remark);
    return 0;
}
