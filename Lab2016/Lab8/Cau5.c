/*
Given an array a[n] of n positive integers, find greatest common divisor of those integers.
Example:
+ Input: [50, 10, 25, 45, 30]
+ Output: 5
*/

#include<stdio.h>
#include<stdbool.h>
#define MAX 16

void main() {
    short n = 0;
    short a[MAX];
    bool stop = false;
    
    while (n < 1 || n > MAX) {
        printf("Size of the array (from 1 to %d): ", MAX);
        scanf("%hi", &n);
    }
    for (short i = 0; i < n; i++) {
        do { // Users have to enter a positive integer.
            printf("Positive number %hi: ", i + 1);
            scanf("%hi", &a[i]);
        }
        while (a[i] <= 0);
    }
    for (short i = 2; i > 1; i++) { // Check from i=2 that if all integers in array are divisible by i or not.
        for (short j = 0; j < n; j++) {
            if (a[j] % i != 0) break; // If any integer in array is not divisible by i, we do not need to check others.
            if (j == n - 1) {
                printf("%hi\n", i);
                stop = true;
            }
        }
        if (stop) break;
    }
}
