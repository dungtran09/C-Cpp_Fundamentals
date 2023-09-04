#include <stdio.h>
#include <stdio.h>

int fun(int n) {
    if (n == 0) {
        return 1;
    } else {
        return 7 + fun(n - 2);
    }
}


int main() {

    int n = 4;

    printf("Result = %d\n", fun(n));
}
