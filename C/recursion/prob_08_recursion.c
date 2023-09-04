#include <stdio.h> 
#include <stdlib.h>

int main() {
    
    int arr[9] = {34, 56, 54, 32, 67, 89, 90, 32, 21};
    
    printf("Original older: ");
    for (int i = 0; i < 9; i++) {
        printf("%d ", arr[i]);
    }

    
    printf("\n");

    printf("After reverse: ");
    for (int i = 8; i >= 0; i--) {
        printf("%d ", arr[i]);
    }
    
    puts("\n");
    return 0;
}
