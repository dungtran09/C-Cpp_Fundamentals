/*
 * Giver array heihgt[] represent the different height buildings. find the number of building has
 * see the sunset. assumed that all height buildings are distinct
 * */

#include <stdio.h>

int facingSunCount(int *height, int size) {
    int i;
    int buildingCount = 1;
    int currMaxHeight = height[0];
    

    for (i = 1; i < size; i++) {
       if (height[i] > currMaxHeight) {
        buildingCount++;
        currMaxHeight = height[i];
       } 
    }

    return buildingCount;
}


int main () {

    int height[5] = {1, 2, 3, 4, 5};
    int result;

    result = facingSunCount(height, 5);

    printf("The number of buildings has see the sunset is: %d\n", result);

    return 0;
}

