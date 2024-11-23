#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main() {

    while (1)
    {
        int n;

    printf("\nEnter the size of the array: ");
    scanf("%d", &n);

    printf("\nGenerating your array...\n");
    float *array = (float *)malloc(n * sizeof(float)); // Array of size 'n'

    // check if allocation failed
    if (array == NULL)
    {
        printf("Memory allocation failed! \n");
        return 1;
    }

    printf("Initializing your array ...\n");
    // initialize lower half with 123
    for (int i = 0; i < n/2; i++)
    {
        array[i] = 123.0f;
    }
    // initialize upper half with 456
    for (int i = n/2; i < n; i++)
    {
        array[i] = 456.0f;
    }
    // if the array has an odd size, initialize midlle with 999
    if (n % 2 == 1)
    {
        array[n/2] = 999.0f;
    }

    printf("Here are the values of your array ...\n");
    for (int i = 0; i < n; i++)
    {
        printf("A[%d]=%f \n", i, array[i]);
    }

    printf("Deallocating the array ... \n");
    free(array); // Don't forget to free memory!

    printf("\nPress a key to initialize another array \n");
    _getch();
    }
}
