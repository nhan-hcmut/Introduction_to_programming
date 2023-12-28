/*
Implement function:
int changeMax(int arr[], int size, int newMax);

You can add other helping functions.

Example:
int a[10] = {3, -2, 5, 0, 1, 8, 0, 9, 4, 9};
printf("The number of changeMax(a, 10, 10) = %d\n", changeMax(a, 10, 10));

The output will be: "The number of changeMax(a, 10, 10) = 2"
*/

#include<stdio.h>

// Helping function(s)
int getMax(int arr[], int size);

// To-do
int changeMax(int arr[], int size, int newMax);

void main() {
    int a[10] = {3, -2, 5, 0, 1, 8, 0, 9, 4, 9};

    printf("The number of changeMax(a, 10, 10) = %d\n", changeMax(a, 10, 10));
}

int getMax(int arr[], int size) {
    int max = arr[0];
    for (int i=1; i < size; i++) {
        if (arr[i] > max) { max = arr[i]; }
    }
    return max;
}

int changeMax(int arr[], int size, int newMax) {
    int numberOfChanges = 0;
    int max = getMax(arr, size);
    for (int i=0; i < size; i++) {
        if (arr[i] == max) {
            arr[i] = newMax;
            numberOfChanges++;
        }
    }
    return numberOfChanges;
}
