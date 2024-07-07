/*
Write a program which let users enter some integers into an array and a positive integer m. The program print out m smallest integers of the array in ascending order.
Example:
+ array = {0, 37, 1, 20, 24} and m = 3
+ Output: [0, 1, 20]
*/

#include<stdio.h>
#define MAX 16

void bubbleSort(short arr[], short);

void main() {
    short m = 0, size = 0;
    short arr[MAX];
    
    while (size<1 || size>MAX) {
        printf("Size of array (from 1 to %d): ", MAX);
        scanf("%hi", &size);
    }
    for (short i=0; i<size; i++) {
        printf("Number %hi: ", i+1);
        scanf("%hi", &arr[i]);
    }
    while (m<1 || m>size) {
        printf("Enter m (from 1 to the size of array): ");
        scanf("%hi", &m);
    }
    bubbleSort(arr, size);
    for (short i=0; i<m; i++) {
        if (i == 0) printf("[");
        printf("%hi", arr[i]);
        if (i < m-1) printf(", ");
        else printf("]\n");
    }
}

void bubbleSort(short arr[], short size) {
    
    for (short i=0; i<size-1; i++) {
        
        for (short j=0; j<size-1-i; j++) {
            
            if (arr[j] > arr[j+1]) {
                short temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}
