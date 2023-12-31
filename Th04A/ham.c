#include<stdio.h>

int UCLN(int a, int b) { // Greatest common divisor
  int temp = 0;
  while (a%b != 0) {
    temp = b;
    b = a%b;
    a = temp;
  }
  return b;
}
int BCNN(int a, int b) { // Lowest common multiple
  return (a*b) / (UCLN(a, b));
}
