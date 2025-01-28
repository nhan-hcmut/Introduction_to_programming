/*
Input: a text file named "input.txt" contains POSITIVE integers.
Output: a text file named "output.txt" contains EVEN integer(s) extracted from "input.txt".

Example:
"input.txt" contains: 5 8 7 10 18 13 20
"output.txt" contains: 8 10 18 20
*/
#include<stdio.h>

void main() {
    FILE* in;
    in = fopen("input.txt", "r");
    int num = 0;

    if (in == NULL) { printf("Cannot open input.txt\n"); }
    else {
        FILE *out;
        out = fopen("output.txt", "w");
        
        if (out == NULL) { printf("Cannot open output.txt\n"); }
        else {
            while (!feof(in)) { // While not reaching the end of the file "input.txt".
                fscanf(in, "%d", &num);
                if (num % 2 == 0) { fprintf(out, "%d ", num); }
            }
        }
        fclose(out);
    }
    fclose(in);
}
