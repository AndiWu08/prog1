// In exercise L6 the task was to draw a rectangle of a specified size. Probably your solution makes use of several loops. Can you do the same using only one loop? (yes it is possible!)

#include "stdio.h"  // printf and scanf
#include "conio.h"  // _getch


int main() {
    
    int height;
    int width;
    
    // programm runs while numbers greater than 0 are entered.
    while (height > 0 || width > 0)
    {
        //get height
        printf("\nEnter height: ");
        scanf("%d", &height);

        // get width
        printf("\nEnter width: ");
        scanf("%d", &width);

        // calculate nr of characters
        int noc = height * width;

        // loops through all the required characters in the rectangle
        for (int i = 1; i <= noc; i++) 
        {
            if ((i <= width) ||
              (i>=(height-1)*width+1) ||
              (i % width == 1) ||
              (i % width == 0)
            )
                {
                    printf("#");
                }
                else
                {
                    printf(" ");
                }
            
            // make new line
            if (i % width == 0)
            {
                printf("\n");
            }
            
        }  
        
        }
        printf("Press any key to exit the program");
        _getch();
}