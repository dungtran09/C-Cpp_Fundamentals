/*
 * C program struct anf pointer
 * */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct studentT {
    char name[64];
    int age;
    float gpa;
    int grad_yr;
};

int main () {
    
    struct studentT s;
    struct studentT *s_ptr;
    
    strcpy(s.name, "Freya");
    s.age = 18;
    s.gpa = 4.4;
    s.grad_yr = 2020;

    
    s_ptr = (struct studentT*)malloc(sizeof(struct studentT));
    
    if (s_ptr == NULL) {
        printf("ERROR: malloc field, exiting!\n");
    }
    
    *s_ptr = s;
    strcpy(s_ptr->name, "Lars");
    s_ptr->age = s.age + 1;
    s_ptr->grad_yr = s.grad_yr + 1;

    printf("%s\n", s.name);
    printf("%s\n", s_ptr->name);
    
    printf("%d\n", s.age);
    printf("%d\n", s_ptr->age);

    return 0;
}
