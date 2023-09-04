#include <stdio.h>
#include <math.h>

/*
 * C program to convert the given binary to decimal using different methods 
 **/

// func return a decimal number of aa binary number

int binary_to_decimal(int num) {

  int i = 0, sum = 0;
  
  while (num > 0) {
    sum += (num % 10) * pow(2, i);
    num /= 10;
    i++;
  }
  return sum;
}


int main () {
  

  // Method 1:
  
  // int number, binary_val, decimal_val = 0, base = 1, remainder;
  // 
  // printf("Enter a binary number (0s and 1s) ");
  // scanf("%d", &number);
  // 
  // binary_val = number;
  //
  // while (number > 0) {
  //   remainder = number % 10;
  //   decimal_val = decimal_val + remainder*base;
  //   base = base * 2;
  //   number /= 10;
  // }
  //
  // printf("The decimal number is: %d\n", decimal_val);


  // Method 2: 

  // int number, sum = 0;
  // int i = 0;
  //
  // printf("Enter a binary number: ");
  // scanf("%d", &number);
  //
  // while (number > 0) {
  //   sum += (number % 10) * pow(2, i);
  //   number /= 10;
  //   i++;
  // }
  //
  // printf("The decimal number is: %d\n", sum);
  

  // Method 3: 
  
  // int sum, number;
  // int i;
  //
  // printf("Enter a binary number: ");
  // scanf("%d", &number);
  //
  // for (i = 0; number != 0; i++) {
  //   sum += (number % 10) * pow(2, i);
  //   number /= 10;
  // }
  //
  // printf("The decimal number is: %d\n", sum);
  

  // Method 4: 
  
  // int number;
  //
  // printf("Enter a number: ");
  // scanf("%d", &number);
  //
  // printf("The decimal of a binary is: %d\n", binary_to_decimal(number));
  
  

  // Method 5:

  // int number, sum;
  // int arr[100]; // declare a array
  // 
  // for (int  i = 0; i < 100; i++) {
  //   arr[i] = 0;
  // }
  //
  // printf("Enter a binary number (0s and 1s): ");
  // scanf("%d", &number);
  // 
  // int i = 0;
  // while (number > 0) {
  //   arr[i] = (number % 10) * pow(2, i);
  //   number /= 10;
  //   i++;
  // }
  //   
  // for (int i =0; i < 100; i++) {
  //   sum += arr[i];
  // }
  //
  // printf("The decimal value of binary is: %d\n", sum);
  //
  
  return 0;
}
