/*
 * C program find largest and smallest of array using Pointer
 * */

#include <stdio.h>
#include <stdlib.h>

void min_max(int a[], int n, int *min, int *max) {
    int i;
    *min = a[0];
    *max = a[0];
    
    for (i = 0; i < n; i++) {
        if (*min > a[i]) {
            *min = a[i];
        }
        if (*max < a[i]) {
            *max = a[i];
        }
    }
}

int main() {
    
    int a[] = {23, 4, 21, 28, 987, 45, 32, 10, 123};
    int n = sizeof(a) / sizeof(a[0]);
    int min, max;

    min_max(a, n, &min, &max);
        
    printf("mix value: %d\nmax value: %d\n", min, max);

    return 0;
}
