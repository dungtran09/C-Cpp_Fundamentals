#include <stdio.h>

/*
 * C program to find the largest number in a array using for loop
 */

int main () {
  
  int size, i, largest;

  printf("Enter the size of array: ");
  scanf("%d", &size);

  int array[size];
  
  printf("Enter %d elements of the array:\n", size);
  for (i = 0; i < size; i++) {
    scanf("%d", &array[i]);
  }

  largest = array[0];

  for (i = 0; i < size; i++) {
    if (largest < array[i]) {
      largest = array[i];
    }
  }

  printf("Largest present in the given array is: %d\n", largest);

  return 0;
}

