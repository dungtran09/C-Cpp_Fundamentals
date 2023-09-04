#include <stdio.h>
 /*
  * C program to find the largest number in an array using recusion
  * */

// function find max of two number
int max(int a, int b) {
  if (a > b) {
    return a;
  } else {
    return b;
  }
}

int largest(int array[], int size, int i) {
  if (i == size-1) {
    return array[i];
  } else {
    return max(array[i], largest(array, size, i+1));
  }
}

int main() {
  
  int size;
  printf("Enter size of array: ");
  scanf("%d", &size);

  int array[size];

  printf("Enter array elements: ");
  for (int i = 0; i < size; i++) {
    scanf("%d", &array[i]);
  }

  printf("Largest number in array is: %d\n", largest(array, size, 0));


  return 0;
}


