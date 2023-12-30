/*
Input: an positive integer N.
Output:
a) If n is odd, print n! (factorial of n).
b) if n is even, print n^(n-1) (n raised to the power of n-1).
*/
#include<stdio.h>

int factorial(int);
int power(int, int);

void main() {
    int n = 0;
    printf("n = ");
    scanf("%d", &n);
    if (n%2 != 0) { printf("%d! = %d\n", n, factorial(n)); }
    else { printf("%d^%d = %d", n, n-1, power(n, n-1)); }
}
int factorial(int num) {
    if (num == 1) return 1;
    return num * factorial(num-1);
}
int power(int base, int pow) {
    if (pow == 1) return base;
    return base * power(base, pow-1);
}
