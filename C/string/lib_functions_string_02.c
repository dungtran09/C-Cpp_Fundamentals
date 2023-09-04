/*
 * library functions string in C
 * */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main () {
    
    char *whitespace = " \t\f\r\v\n"; // note the space char at begining
    char *token;                      // the next token in the line
    char *line;                       // the line of text read from user, we using this line to tokennize              
    
    // allocating some space on the heap
    line = (char*)malloc(200*sizeof(char));
    if (line == NULL) {
        printf("ERROR: malloc failed.\n");
        exit(1);
    }

    // read in a line entered by use from standard in
    printf("Enter a line of text: ");
    line = fgets(line, 200*sizeof(char), stdin);
    
    if (line == NULL) {
        printf("ERROR: reading string failed, exiting!\n");    
        exit(1);
    } 

    printf("Print string: %s\n", line);

    // divide string into token
    
    token = strtok(line, whitespace); // get first token

    while (token != NULL) {
        printf("Next token is: %s\n", token);
        token = strtok(NULL, whitespace); // get the next token
    }
    
    free(line);
    line = NULL;
    
    return 0;
}
