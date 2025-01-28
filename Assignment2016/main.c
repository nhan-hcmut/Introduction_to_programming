#include<stdio.h>
#include<stdlib.h>
#include "utils.h"
#include "utils.c"

void main() {
    short selection = 0;

    printf("Press a number from 1 to 5 to select one of below options:\n");
    
    printf("1 -> Calculate volume and surface area of a cube.\n");
    printf("2 -> Check if a MxN matrix is symmetric or not.\n");
    printf("3 -> Convert decimal to binary.\n");
    printf("4 -> Take height and width from users. Print out a rectangle.\n");
    printf("5 -> Escape.\n-------------------\n");

    do {
        printf("Your choice: ");
        scanf("%hi", &selection);
    }
    while (selection < 1 || selection > 5);

    switch (selection) {
        case 1: {
            float edge = 0;
            
            while (edge <= 0) {
                printf("Edge (>0): ");
                scanf("%f", &edge);
            }
            printf("Volume of the cube: %0.3f\n", volume(edge));
            printf("Surface area of the cube: %0.3f\n", area(edge));
            break;
        }        
        case 2: {
            short m = 0, n = 0;
            
            while (m < 1) {
                printf("How many rows?\n");
                scanf("%hi", &m);
            }
            
            while (n < 1) {
                printf("How many columns?\n");
                scanf("%hi", &n);
            }
            if (m != n) {
                printf("Not a symmetric matrix.\n");
                break;
            }
            short* matrix = (short*)calloc(m * n, sizeof(short));
            
            inputMatrix(matrix, m, n);
            printMatrix(matrix, m, n);

            if (isSymmetric(matrix, m, n)) { printf("The matrix is symmetric.\n"); }
            else { printf("The matrix is not symmetric.\n"); }
            
            free(matrix);
            break;
        }

        case 3: {
            short num = 0;
            
            while (num <= 0) {
                printf("Decimal positive number: ");
                scanf("%hi", &num);
            }
            decToBin(num);
            break;
        }

        case 4: {
            short height = 0, width = 0;
            
            while (height <= 0) {
                printf("Height: ");
                scanf("%hi", &height);
            }
            
            while (width <= 0) {
                printf("Width: ");
                scanf("%hi", &width);
            }
            rectangle(height, width);
            break;
        }
        case 5:
            printf("Escape the program.\n");
    }
}
