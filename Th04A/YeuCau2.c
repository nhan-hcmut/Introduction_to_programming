/*
Input: an integer N.
Output: all prime numbers which are smaller than N. Then, calculate sum and product of those numbers.
*/
#include<stdio.h>
#include<stdbool.h>

bool isPrime(int);

void main() {
    int n = 0, sum = 0, product = 1;
    printf("n = ");
    scanf("%d", &n);
    
    for (int i = 2; i < n; i++) {
        if (isPrime(i)) {
            printf("%d\n", i);
            sum += i;
            product *= i;
        }
    }
    printf("Sum = %d\nProduct = %d\n", sum, product);
}

bool isPrime(int num) { // Precondition: num is an integer larger than 1.
    for (int i = 2; i < num; i++) {
        if (num % i == 0) return false;
    }
    return true;
}
