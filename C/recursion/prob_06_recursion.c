#include <stdio.h>

void fun(int n) {

    if (n > 0) {  // Ex: n = 5
        fun(n - 1);
    }

    for (int i = 0; i < n ; i++) {
        
    printf("%s", " * " );

    }
}

int main () {

    int n;
    
    printf("Enter a number: ");
    scanf("%d", &n);

    fun(n);
    
    printf("\n");
    return 0;
}
