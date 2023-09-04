#include <stdio.h>

/*
 * C program to read a sentance and make count the number of vowels and  consonants.
 * and print on the console.
 * */

int main() {
    
    char sentance[100];
    int i, vowels = 0, consonants = 0, specials = 0;

    printf("Enter a sentance: ");
    gets(sentance);

    for (i = 0; sentance[i] != '\0'; i++) {
        
        if (sentance[i] == '\t' || sentance[i] == '\0' || sentance[i] == ' ') {
            specials += 1;
        }

        if (sentance[i] == 'a' || sentance[i] == 'e' || sentance[i] == 'i'|| sentance[i] == 'o' || sentance[i] == 'u' 
            || sentance[i] == 'A' || sentance[i] == 'E' || sentance[i] == 'I'|| sentance[i] == 'O' || sentance[i] == 'U') {
            
            vowels += 1;
        } else {
            consonants += 1;
        }
    }

    consonants = consonants - specials;

    printf("No. of vowels in \"%s\" is: %d\n", sentance, vowels);
    printf("No. of consonants in \"%s\" is: %d\n", sentance, consonants);


    return 0;
}
