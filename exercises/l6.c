// Write a C program that asks the user to enter the height and width of an rectangle and then draws a corresponding rectangle using #

#include "stdio.h"  // printf and scanf
#include "conio.h"  // _getch


int main() {
    
    int height;
    int width;
    
    // programm runs while numbers greater than 0 are entered.
    while (height > 0 || width > 0)
    {
        printf("\nEnter height: ");
        scanf("%d", &height);

        printf("\nEnter width: ");
        scanf("%d", &width);

        for (int i = 0; i < height; i++)
        {
            printf("#");
            for (int j = 0; j < width-2; j++)
            {
                if (i==0 || i==height-1)
                {
                    printf("#");
                }
                else
                {
                    printf(" ");
                }
            }
            
            printf("# \n");
        }

        printf("\n");   
        
    }
    printf("Press any key to exit the program");
    _getch();
}