#include <stdio.h>
#include <stdlib.h>

int change_value(int *input) {
    int val;
    val = *input;
    
    if (val < 100) {
        *input = 100;
    } else {
        *input = val * 2;
    }
    
    printf("val = %d\n", val);
    return val;
}

int main () {

    int x = 30;
    int y;

    y = change_value(&x);

    
    printf("x = %d\ny = %d\n",x, y);
        
    return 0;
}
