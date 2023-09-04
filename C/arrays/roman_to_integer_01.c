/*
    C program to convert a roman charactors to integer;
**/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int getIntegerValue(char ch) {
    switch (ch) {
        case 'I':
            return 1;
        case 'V':
            return 5;
        case 'X':
            return 10;
        case 'L':
            return 50;
        case 'C':
            return 100;
        case 'D':
            return 500;
        case 'M':
            return 1000;
        default:
            return -1;
    }
}

int romanToInteger(char *str) {
    
    int length = strlen(str);
    int i, output = 0;
    
    for (i = 0; i < length; i++) {
        int curr = getIntegerValue(str[i]);

        if (i + 1 < length) {
            int next = getIntegerValue(str[i+1]);

            if (curr >= next) {
                output = output + curr;
            } else {
                output = output + (next - curr);
                ++i;
            }
        } else {
            output = output + curr;
        }
    }

    return output;

}


int main() {
    
    char str[] = {"MCMIV"};

    
    int output = romanToInteger(str);

    if (output != -1) {
        printf("%s has been converted to : %d\n", str, output);
    } else {
        printf("The roman charactors not valid.\n");
    }
    return 0;
}


