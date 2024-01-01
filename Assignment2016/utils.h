#include<stdbool.h>
#ifndef UTILS_H_INCLUDED
#define UTILS_H_INCLUDED

/* Option 1 */

extern float volume(float edge);
extern float area(float edge);

/* Option 2 */

extern void inputMatrix(short *matrix, short m, short n);
extern void printMatrix(short *matrix, short m, short n);
extern bool isSymmetric(short *matrix, short m, short n);

/* Option 3 */

extern void decToBin(short num);

/* Option 4 */

extern void rectangle(short height, short width);

#endif
