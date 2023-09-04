#include <stdio.h>

/*
 * C program to find the largest element in array.
 * */

int largest(int array[], int size) {
  int i;

  // declare largest element as the first element
  int largest = array[0];

  for (i = 0; i < size; i++) {
    
    // update largest element if current element great than largest element
    if (largest < array[i]) {
      largest = array[i];
    }

  }

  return  largest;
}

int main () {
  
  int size;

  // get size of array
  printf("Enter size of array: ");
  scanf("%d", &size);

  int array[size];

  // insert elements into array
  printf("Insert elements into array: ");
  for (int i = 0; i < size; i++) {
    scanf("%d", &array[i]);
  }

  // print largest element on console
  printf("The largest element in array is: %d\n", largest(array, size) );

  return 0;
}
