#include <stdio.h>
#include <stdlib.h>

int search(int[], int, int, int);

int main(int argc, char *argv[]) {

    int listNum[] = {2, 4, 6, 8, 9, 24, 56, 90};
    
    int result = search(listNum, 24, 0, sizeof(listNum) / sizeof(listNum[0]) - 1) ;

    printf("Result:  %d\n", result);

    return EXIT_SUCCESS;
}

int search(int listNum[], int target, int start, int end) {

    while (start <= end) {
        int middle = start + (end - start) / 2;
        if (target == listNum[middle]) {
            return middle;
        } else if (target > listNum[middle]) {
            start = middle + 1;
        } else {
            end = middle - 1;
        }
    }
    return -1;
}
