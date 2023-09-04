#include <stdio.h>

void func(const int *p) {
    *p = 1;
}

int main(int argc, char *argv[]) {

    const int num = 10;
    
    func(&num);
    printf("%d\n", num);

    return 0;
}
