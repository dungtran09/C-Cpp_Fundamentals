#include <ctype.h>
#include <stdio.h>

/*
 * C program read an English sentance and replace lowercase charactors by uppercase charactors
 * and vice-versa
 * Output is origin sentance and new sentance after converted.
 * */


int main() {
    
    char i, ch, count, sentance[100];

    printf("Enter a sentance: ");
    
    for (i = 0; (sentance[i] = getchar()) != '\n'; i++) {
        ;
    }

    sentance[i] = '\0';
    printf("Before sentance converted:\n%s\n", sentance);

    count = i;
    printf("After sentance converted: \n");
    for (i = 0; i < count; i++) {
        ch = islower(sentance[i]) ? toupper(sentance[i]) : tolower(sentance[i]);
        putchar(ch);
    }
    
    printf("\n");

    return 0;
}
