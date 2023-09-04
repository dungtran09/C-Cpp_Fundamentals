#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    
    const int i = 42;
    
    int const *pInt = (int *) &i;
    
    // *pInt = 50;

    printf("%d\n", *pInt);
    printf("%d\n", i);
    
    return EXIT_SUCCESS;    
}
