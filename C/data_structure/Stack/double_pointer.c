/*
 * C program
 * */

#include <stdio.h>
#include <stdlib.h>

void change_val(int** ptr) {
    int val = 45;
    *ptr = &val;
    printf("Address val in change_val(): %p\n", &val);
    printf("Address ptr in change_val(): %p\n", *ptr);
}

int main() {
    int val = 35;
    int* ptr;
    ptr = &val;

    printf("%d\n", *ptr);

    change_val(&ptr);
    printf("Address ptr in main():       %p\n", ptr);
    printf("%d\n",*ptr);

}
