#include <stdio.h>
#include <stdlib.h>

void print(int n) {
    if (n > 0) {
        for (size_t i = 0; i < n; i++) {
            printf("%d   ", n);
        }
        printf("\n");
        print(n - 1);
    }

}

int main(int argc, char *argv[]) {
    printf("Enter a number: ");
    int n;
    scanf("%d", &n);

    print(n);

    return EXIT_SUCCESS;
}
