#include <stdio.h>

/*
 * C program find largest element from a given array using pointer
 * */

void largest_element(int array[], int size, int *largest) {
  int i;
  *largest = array[0];

  for (i = 0; i < size; i++) {
    if (*largest < array[i]) {
      *largest = array[i];
    }
  }

}

int main () {
  
  int size;
  
  printf("Enter size of array: ");
  scanf("%d", &size);

  int array[size];
  int largest;

  printf("Enter array elements: ");
  for (int i = 0; i < size; i++) {
    scanf("%d", &array[i]);
  }

  largest_element(array, size, &largest);

  printf("The largest number in array is: %d\n", largest);
  return 0;
}
