
/*
 * Giver array heihgt[] represent the different height buildings. find the number of building has
 * see the sunset. assumed that all height buildings are distinct
 * */

#include <stdio.h>

int* facingSunCount(int *height, int size) {
    int i;
    static int buildingsSeeSun[5] = {0};
    int currMaxHeight = height[0];
    buildingsSeeSun[0] = height[0]; 

    for (i = 1; i < size; i++) {
       if (height[i] > currMaxHeight) {
        buildingsSeeSun[i] = height[i];
        currMaxHeight = height[i];
       } 
    }

    return buildingsSeeSun;
}


int main () {

    int height[5] = {7, 4, 8, 2, 9};
    int *p;

    p = facingSunCount(height, 5);
    
    printf("The buildings has see the sunset is: ");
    for (int i = 0; i < 5; i++) {
        if (*(p + i) != 0) {
            printf("%d ", *(p + i));
        }
    }
    
    printf("\n");

    return 0;
}

