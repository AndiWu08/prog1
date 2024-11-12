/* Write a C program that uses the do-while statement to output the following:
         Counting from 1 to 10:
         1 2 3 4 5 6 7 8 9 10
         Counting from -5 to -15:
         -5 -6 -7 -8 -9 -10 -11 -12 -13 -14 -15
         Good bye!
         Press any key to exit this program.
      
 */
#include "stdio.h"
#include "conio.h"

int main() {
    int i = 1;

    printf("Counting from 1 to 10: \n");
    while (i <= 10)
    {
        printf("%d ", i++);
    }

    int j = -5;

    printf("\n Counting from -5 to -15: \n");
    while (j >= -15)
    {
        printf("%d ", j--);
    }
    
    printf("Goodbye! \n Press any key to exit this program");
    _getch();   // Exits program when key is pressed; #include "conio.h" to use
}