#include <stdio.h>
#include <stdlib.h>

int binarySearch(int listNum[], int start, int end, int target) {
    if (start > end) {
        return -1;
    }

    int middle = start + (end - start) / 2;

    if (target == listNum[middle]) {
        return middle;
    }

    if (target < listNum[middle]) {
        return binarySearch(listNum, start, middle - 1, target);
    }
    return binarySearch(listNum, middle + 1, end, target);
}

int main(int argc, char *argv[]) {
    int listNum[] = {-7, 0, 2, 5, 6, 7};
    int start = 0, end = sizeof(listNum) / sizeof(listNum[0]) - 1;
    int target = 7;
    int aws = binarySearch(listNum, start, end, target);
    printf("%d\n", aws);

    return EXIT_SUCCESS;
}
