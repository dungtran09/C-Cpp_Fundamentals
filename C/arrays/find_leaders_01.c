/*
 * C program find all leaders in array.
 * A element is a leader if it is strictly great than all the elements to its right side 
 * */

#include <stdio.h>

int *findLeaders(int *arr, int size) {
    static int leaders[] = {0};
    leaders[0] = arr[size - 1];
    int indexRightArr = size - 1;
    int indexLeaders = 0;

    for (indexRightArr = size - 2; indexRightArr >= 0; indexRightArr--) {
        if (arr[indexRightArr] > leaders[indexLeaders]) {
            leaders[indexLeaders + 1] = arr[indexRightArr];
            indexLeaders++;
        }
    }

    return leaders;
}

int main() {

    int X[6] = {6, 5, 3, 4, 5, 2};
    int *p;

    p = findLeaders(X, 6);
    
    printf("The leaders of in array is:\n");
    for (int i = 0; i < 6; i++) {
        if (*(p + i) > 0) {
            printf("arr[%d] = %d \n",i ,*(p + i));
        }
    }
    
    printf("\n");
    return 0;
}
