/*
 * C program dynamically allocating strings.
 * */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main () {

    int size;
    char str[64];
    char *new_str;

    strcpy(str, "Hello");
    size = strlen(str);
    
    new_str = (char*)malloc(size+1);

    if (new_str == NULL) {
        printf("ERROR: malloc failed exiting!\n");
        exit(1);
    }

    strcpy(new_str, str);

    printf("%s\n", new_str);

    strcat(str, " There ");

    printf("%s\n", str);
    
    free(new_str);

    new_str = NULL;
    return 0;
}


