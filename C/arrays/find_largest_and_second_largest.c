#include <stdio.h>

/*
 * C program to read elements into array and find 
 * the largest two elemnets in a given array
 * */

int main() {
  
  int i, n, largest1, largest2, temp;

  // get size of array
  printf("Enter size of array: ");
  scanf("%d", &n);

  int arr[n];

  // insert elements into array
  printf("Enter element in to array: ");
  for (i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
  }
  
  // print all elements of array

  for (i = 0; i < n; i++) {
    printf("%d ", arr[i]);
  }
  
  printf("\n");
  
  largest1 = arr[0], largest2 = arr[1];

  if (largest1 < largest2) {
    temp = largest1;
    largest1 = largest2;
    largest2 = temp;
  }
  
  for (i = 2; i < n; i++) {
    if (largest1 < arr[i]) {
      largest2 = largest1;
      largest1 = arr[i];
    } else if (largest2 < arr[i] && largest1 != arr[i]) {
      largest2 = arr[i];
    }
  }
  
  printf("The largest1 is: %d\n", largest1);
  printf("The largest2 is: %d\n", largest2);

  return 0;

}
