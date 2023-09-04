#include <stdio.h>

int main(int argc, char *argv[]) {


    int *i_null = 0; // integer NULL pointer
    double *d_null = NULL; // double NULL pointer

    if (i_null == (int *)d_null)    printf("Yep!\n");
    if (d_null == (double *)i_null) printf("Also yep!\n");

    if (i_null == NULL) printf("Yep!\n");
    if (d_null == 0)    printf("Also yep!\n");  
    
    int *ip = ...; // any value that is not a NULL pointer
    if (i_null == ip) printf("This doesn't happen.\n");
    if (ip == 0)      printf("Also doesn't happen.\n");

    return 0;
}
