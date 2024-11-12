/* Write a program that uses two for-loops (not nested) in order to output the following:
       
      Output for first for-loop:
      75 70 65 60 55 50 45 40 35 30 25 20 15

      Output for second for-loop:
      1 2 4 5 8 10 11 13 16 17 19 20 22 23 25 26 29 31 32 34 37 38 40 41 43 44 46 47        
      
So the second for-loop shall output all numbers between 1 and 50 except numbers that are divisible by 3 or 7. */

#include "stdio.h"

int main() {
    int i;

    printf_s("Output for first loop: \n");
    for (i = 75; i >= 15; i -= 5)
    {
        printf_s("%d ", i);
    }
    
    printf_s("\n Output for second loop: \n");
    for (i = 0; i <= 50; i++)
    {
        // % == Rest bei Ganzzahldivision
        if ((i % 3 ==0) || (i % 7 ==0))
        {
            continue;
        }
        printf_s("%d ", i);
    }
    
}