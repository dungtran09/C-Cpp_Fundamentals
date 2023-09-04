#include <stdio.h>

void get(int n) {

    if (n < 1){
        return;
    }

    get(n - 1);
    get(n - 3);
    
    printf("%d ",n);
}

int main () {

    int n = 6;

    get(n);

    puts("\n");

    return 0;
}
