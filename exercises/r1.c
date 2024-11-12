/* Write a C program that asks the user to enter a lower and upper border of an interval and then generates and outputs 10
 random numbers in that interval. The program shall stop only if the lower and upper border entered are equal.
 */

#include "stdio.h"  // printf and scanf
#include "conio.h"  // _getch
#include "stdlib.h" // rand -> random numbers

int main() {
    // input higher and lower border

    int low;
    int high;
    printf("Enter lower border: ");
    scanf("%d", &low);

    printf("\nEnter higher border: ");
    scanf("%d", &high);

    // stops program if low and high are the same
    if (low==high)
    {
        printf("Borders are the same");
        exit(1);    // break can't be used in main -> exit(1) achieves the same; alternate: whole program in a while loop
    }
    

    for (int i = 0; i < 10; i++)
    {
        // generates a random number within the range low, high
        int random = rand() % (high - low + 1) + low;

        printf("%d ", random);
    }
    
    printf("Press any key to exit the program");
    _getch();

}