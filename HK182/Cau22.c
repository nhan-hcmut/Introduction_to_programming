/*
Input: an integer (n) from keyboard.

Output: Sum of numbers which are:

+ In range from 1 to n.
+ Divisible by 7.
+ Leave remainder 3 when divided by 6.

Example:
Input: n = 63
Output: Sum = 84 (Sum of 2 numbers: 21 and 63)
*/
#include<stdio.h>

void main() {
  
  // Declare and initialize variables
  int n = 0, sum = 0;

  // Take input "n" from keyboard
  printf("n = ");
  scanf("%d", &n);

  // A loop that checks if a number "i" is divisible by 7 and leaves remainder 3 when divided by 6
  for (int i = 1; i <= n; i++) {
    if ( (i % 7 == 0) && (i % 6 == 3) ) {
      sum += i;
    }
  }
  printf("Sum = %d", sum);
}
