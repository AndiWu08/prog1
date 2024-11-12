/* Write a C program that first outputs lines 1-10 using two nested for-loops and then outputs line 11-20 using two nested for-loops again.
       
      0
      0 1
      0 1 2
      0 1 2 3
      0 1 2 3 4
      0 1 2 3 4 5
      0 1 2 3 4 5 6
      0 1 2 3 4 5 6 7
      0 1 2 3 4 5 6 7 8
      0 1 2 3 4 5 6 7 8 9
      *
      * *
      * * *
      * * * *
      * * * * *
      * * * * * *
      * * * * * * *
      * * * * * * * *
      * * * * * * * * *
      * * * * * * * * * * */



#include "stdio.h"


int main() {
    for (int i = 0; i <= 10; i++)
    {
        for (int j = 0; j < i; j++)
        {
            printf("%d ", j);
        }
        printf("\n");
    }
    
    for (int i = 0; i <= 10; i++)
    {
        for (int j = 0; j < i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}