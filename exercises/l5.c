// Write a C program that outputs the numbers 17,20,23,26,29 using 1.) a for-loop, 2.) using a while-loop and 3.) using a do-while loop:

#include "stdio.h"

int main() {
    printf("With a for-loop: \n");
    for (int i = 17; i < 30; i +=3)
    {
        printf("%d ", i);
    }

    printf("\nWith a while-loop \n");
    int j = 17;
    while (j < 30)
    {
        printf("%d ", j);
        j += 3;
    }
    
    printf("\n With a do-while loop: \n");
    int k = 17;
    do
    {
        printf("%d ", k);
        k +=3 ;
    } while (k < 30);
    
}