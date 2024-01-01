#include<stdio.h>
#include<stdbool.h>

/* Option 1 */

float volume(float edge) {
    return edge*edge*edge;
}
float area(float edge) {
    return edge*edge*6;
}

/* Option 2 */

void inputMatrix(short *matrix, short m, short n) {
    
    for (short i=0; i < m; i++) {
        
        for (short j=0; j < n; j++) {
            printf("Row %hi, column %hi: ", i+1, j+1);
            scanf("%hi", &matrix[(i*m)+j]);
        }
    }
}

void printMatrix(short *matrix, short m, short n) {

    for (short i=0; i < m; i++) {
        
        for (short j=0; j < n; j++) {
            printf("%hi", matrix[(i*m)+j]);
            if (j < n-1) printf(" ");
            else printf("\n");
        }
    }
}

bool isSymmetric(short *matrix, short m, short n) {
    
    for (short i=0; i < m; i++) {

        for (short j=0; j < n; j++) {
            if (matrix[(i*m)+j] != matrix[(j*m)+i]) return false;
        }
    }
    return true;
}

/* Option 3 */

void decToBin(short num) {
    short digit[16];
    short i = 0;
    
    for (i = 0; num > 0; i++) {
        digit[i] = num%2;
        num /= 2;
    }
    for (i--; i>-1; i--) {
        printf("%hi", digit[i]);
    }
    printf("\n");
}

/* Option 4 */

void rectangle(short height, short width) {

    for (short i=0; i < height; i++) {
        
        for (short j=0; j < width; j++) {
            if (i==0 || j==0 || i==height-1 || j==width-1) { printf("*"); }
            else { printf(" "); }
        }
        printf("\n");
    }
    printf("\n");
}
