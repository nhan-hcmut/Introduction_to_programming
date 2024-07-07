/*
Let users enter an array of integers. Then, this program removes the duplicate numbers and print out new array.
Example:
+ Input: [0, 9, 0, 1, 1]
+ Output: [0, 9, 1]
*/

#include<stdio.h>
#define MAX 16

void main() {
    short arr[MAX];
    short size = 0;
    
    while (size<1 || size>MAX) { // Users enter the size of array.
        printf("Size of array (from 1 to %d): ", MAX);
        scanf("%hi", &size);
    }
    
    for (short i=0; i<size; i++) { // Users enters integers into the array.
        printf("Number %hi: ", i+1);
        scanf("%hi", &arr[i]);
    }
    
    for (short i=0; i<size-1; i++) {
        for (short j=i+1; j<size; j++) {
            if (arr[i] == arr[j]) { // If there is a duplicate number at index j, shift all numbers after that (from index j+1 to index size-1) to the left.
                for (short k=j; k<size-1; k++) {
                    arr[k] = arr[k+1];
                }
                size--;
                j--; // After removing duplicate number, the value at index j changed. We have to check the number at index j again (in the next loop).
            }
        }
    }
    for (short i=0; i<size; i++) { // Print out new array
        if (i == 0) printf("[");
        printf("%hi", arr[i]);
        if (i<size-1) printf(", ");
        else printf("]\n");
    }
}
