/*
 * C program struct
 * */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct personT {
    char *name;
    int age;
};


int main () {

    struct personT p1, *p2;
    
    p1.name = (char*)malloc(sizeof(char) * 8);
    strcpy(p1.name, "TranDug");
    p1.age = 26;

    p2 = (struct personT*)malloc(sizeof(struct personT));

    p2->name = (char*)malloc(sizeof(char)*8);
    strcpy(p2->name, "LinkLee");
    p2->age = 24; 

    return 0;
}
