#include<stdio.h>
#include "ham.h"

void main() {
    int ucln = UCLN(12, 8);
    printf("UCLN(12, 8) = %d\n", ucln);
    fflush(stdin);
    getchar();
    /*
    4.3 Luyen tap truyen tham so
    Buoc 6
    */
    int a = 0, b = 0;
    printf("a = ");
    scanf("%d", &a);
    printf("b = ");
    scanf("%d", &b);
    ucln = UCLN(a, b);
    printf("UCLN(%d, %d) = %d\n", a, b, ucln);
    fflush(stdin);
    getchar();
}
