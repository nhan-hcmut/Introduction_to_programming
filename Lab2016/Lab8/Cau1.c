/*
Users enter a positive integer n (n > 0). Then, users can enter n integers. This program have to sort those integers in ascending order and print them out.
*/

#include<stdio.h>
#define MAX 16

void bubbleSort(short arr[], short);

void main() {
    
    short n = 0; // "short" is an integer type. Storage size: 2 bytes. Value range: from -32,768 to 32,767.
    short sequence[MAX];
    
    while (n < 1) { // Users have to enter an positive integer (larger than or equal to 1)
        printf("Enter n (n>0): ");
        scanf("%hi", &n); // "%hi" is the format specifier of "short"
    }
    
    for (short i=0; i<n; i++) {
        printf("Number %hi: ", i+1);
        scanf("%hi", &sequence[i]);
    }

    bubbleSort(sequence, n);

    for (short i=0; i < n; i++) {
        if (i == 0) printf("[");
        
        printf("%hi", sequence[i]);
        if (i < n-1) printf(", ");
            
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
