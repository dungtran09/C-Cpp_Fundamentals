/*
 * C program implementation Tree using array.
 * */

#include <stdio.h>
#include <stdlib.h>

#define MAX 10

char tree[MAX];

void root(char);
void left(char, int);
void right(char, int ); 
void print();

int main(int argc, char *argv[]) {
    
    root('A');
    left('B', 0);
    right('C', 0);
    left('D', 3);
    // right('E', 1);
    print();
    printf("\n");
    return EXIT_SUCCESS;
}   

void root(char c) {
    if (tree[0] != '\0') {
        printf("%s\n", "The root of the tree already exits!");
    } else {
        tree[0] = c;
    }
}

void left(char c, int parent) {
    if (tree[parent] == '\0') {
        printf("Can't insert %c. Parent of %c doesn't exits.\n", c, c);
    } else {
        tree[(2 * parent) + 1] = c;
    }
}

void right(char c, int parent) {
    if (tree[parent] == '\0') {
        printf("Can't insert %c. Parent of %c doesn't exits.\n", c, c);
    } else {
        tree[(2 * parent) + 2] = c;
    }
}

void print() {
    int i;
    for (i = 0; i < MAX; i++) {
        if (tree[i] == '\0') {
            printf("* ");
        } else {
            printf("%c ", tree[i]);
        }
    }
}

