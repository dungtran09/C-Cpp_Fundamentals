#include <stdio.h>
#include <string.h>

int main() {
  
  int A[2][3] = {{2, 3, 6}, {4, 5, 8}};

  // int (*p)[3] = A;
  
  printf("adress of D-array A[0]:\n");
  for (int i = 0; i < 3; i++) {
    printf("adress of A = %d\n", &A[0][i]);
  }
  
  printf("\n");

  printf("adress of D-array A[1]:\n");
  for (int j = 0; j < 3; j++) {
    printf("adress of A = %d\n", &A[1][j]);
  }

  printf("\n");

  // printf("adress A[0] = %d\n", A);
  // printf("adress A[0] = %d\n", *A);
  // printf("adress A[0] = %d\n", A[0]);
  // printf("adress A[0] = %d\n", &A[0]);
  // printf("adress A[0] = %d\n", &(A[0][0]));
  
  printf("value A[0] = %d\n", *(A[0]));
  printf("value A[0] = %d\n", *(*(A + 0) + 0));
  printf("value A[0] = %d\n", (A[0][0]));

  printf("\n");
  printf("value A[1] = %d\n", *(A[0] + 1));
  printf("value A[1] = %d\n", *(*(A + 0) + 1));
  printf("value A[1] = %d\n", (A[0][1]));

  printf("\n");
  printf("value A[2] = %d\n", *(A[0] + 2));
  printf("value A[2] = %d\n", *(*(A + 0) + 2));
  printf("value A[2] = %d\n", (A[0][2]));
  
  printf("\n");

  // printf("adress A[1] = %d\n", A+1);
  // printf("adress A[1] = %d\n", *(A+1));
  // printf("adress A[1] = %d\n", A[1]);
  // printf("adress A[1] = %d\n", &A[1]);
  // printf("adress A[1] = %d\n", &(A[1][0]));
  // 
  // printf("adress A[1][2] %d\n", *(A+1)+2);
  // printf("adress A[1][2] %d\n", A[1]+2);
  // printf("adress A[1][2] %d\n", &(A[1][2]));
  
  printf("value A[1][0] = %d\n", *(A[1]));
  printf("value A[1][0] = %d\n", *(*(A + 1) + 0));
  printf("value A[1][0] = %d\n", (A[1][0]));
  
  printf("\n");
  printf("value A[1][1] = %d\n", *(A[1] + 1));
  printf("value A[1][1] = %d\n", *(*(A + 1) + 1));
  printf("value A[1][1] = %d\n", (A[1][1]));
  printf("\n");
  printf("value A[1][2] = %d\n", *(A[1] + 2));
  printf("value A[1][2] = %d\n", *(*(A + 1) + 2));
  printf("value A[1][2] = %d\n", (A[1][2]));

  return 0;
}
