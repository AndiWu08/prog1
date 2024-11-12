// Write a C program using two nested do-while loops that outputs the multiplication table:

#include "stdio.h"
#include "conio.h"

int main() {
    int outer, inner;

    outer = 1;

    do
    {
        inner = 1;
        do
        {
            // 2d, 3d, etc. wv platz wird freigehalten für variable; \t == tabulator
            printf("%2d x %2d = %3d\t", inner, outer, inner * outer);
            inner++;
        } while (inner <= 10);
        printf("\n");
        outer++;
    } while (outer <= 10);
    
}