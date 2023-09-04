#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {
  int numberOfRows;
  int currRow;
  int currCol;
  printf("Enter number of rows: ");
  scanf("%d", &numberOfRows);
  
  for (currRow = 1; currRow <= numberOfRows; currRow++) {
      for (currCol = 1; currCol <= numberOfRows; currCol++) {
          if ((currRow + currCol) <= numberOfRows) {
              printf(" ");
          } else {
              printf("*");
          }
      }
      printf("\n");
  }

  
  return 0;
}
