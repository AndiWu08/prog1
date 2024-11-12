/* Write a C program where the user can enter the number of desired rows and your program draws a corresponding triangle:
        
      Number of rows for triangle? 3
                                   *
                                  ***
                                 ***** */

#include "stdio.h"  // printf and scanf
#include "conio.h"  // _getch

int main() {
    
    int rows;
    
    // programm runs while numbers greater than 0 are entered.
    do
    {
        printf("\nNumber of rows for triangle? ");
        scanf("%d", &rows);
    
        for (int row = 1; row <= rows; row++)
        {
            // calculate how many stars are in the current row
            int stars = row*2-1;

            // print the spaces needed
            for (int space = 0; space < (rows-row); space++)
            {
                printf(" ");
            }
            

            //print the stars
            for (int star = 0; star < stars; star++)
            {
                printf("*");
            }
            
            printf("\n");

        }
        
    
    } while (rows > 0);


    printf("Press any key to exit the program");
    _getch();
}