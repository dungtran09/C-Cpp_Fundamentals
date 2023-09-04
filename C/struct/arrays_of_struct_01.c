/*
 * C program arrays of struct 
 * */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct studentT {
    char name[64];
    int age;
    float gpa;
    int grad_y;
};

int main () {
    
    struct studentT classroom1[40];

    struct studentT *classroom2;

    struct studentT *classroom3[40];


    return 0;
}
