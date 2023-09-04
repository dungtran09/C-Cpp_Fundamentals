#include <stdio.h> 

void fun(int n) {
    if (n == 0) {
        printf("%d ", n);
        return;
    } else {
        printf("%d ", n);
    }

    fun(n-1);
}

int main () {
   
    int n = 5;
    
    fun(5);

    
    puts("\n");
    return 0;
}
