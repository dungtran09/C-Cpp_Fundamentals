#include <stdio.h>

int input(char str[], int n) {
    int i = 0, ch; 

    while ((ch = getchar()) != '\n') {
        if (i < n) {
            str[i++] = ch;
        }
    }
    str[i] = '\0';
    
    return i;
}

int main(int argc, char *argv[]) {
    char str[100];
    printf("Enter a string: ");
    int n = input(str, 99);
    
    printf("Total: %d character \nContent: %s\n", n, str);
    return 0;
}
