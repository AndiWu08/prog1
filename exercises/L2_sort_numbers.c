#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define MAX_NUMBER 1000

// void => sorts the array in place, nothing is returned
void bubble_sort(double array[], int arraySize) {
    bool swapped;
    
    do
    {
        swapped = false;
        for (int i = 0; i < arraySize-1; i++)
        {
            if (array[i] > array[i+1])
            {
                // numbers are not in correct (=ascending) order -> swap numbers
                double tmp = array[i];
                array[i] = array[i+1];
                array[i+1] = tmp;
                swapped = true;
            }
        }
        
    } while (swapped);
    
}

int main() {
    FILE *file;
    FILE *sorted_file;
    char filename[100];
    char sorted_filename[100];
    char line[100];
    double number, sum, median, avg = 0;
    double arr[MAX_NUMBER];
    int arrSize = 0;

    // Prompt the user for the filename
    printf("Enter the name of the dataset file: [./NAME].txt ");
    scanf("%s", filename);

    // Open the file for reading
    file = fopen(filename, "r");
    if (file == NULL) {
        printf("Error: Could not open file %s\n", filename);
        return 1;
    }

    // Read each line and process numbers only, write numbers into array
    while (fgets(line, sizeof(line), file) != NULL) {
        // Try to parse a number from the line, lf == double, if it doesnt work -> 0 -> else
        if (sscanf(line, "%lf", &number) == 1) {
            if (arrSize < MAX_NUMBER)
            {
                arr[arrSize] = number;
                arrSize++;
            }
            
        } else {
            // Ignore lines that do not contain valid numbers
            printf("Ignoring non-numeric data: %s", line);
        }
    }

    // Print the array
    printf("Array elements are: ");
    for (int i = 0; i < arrSize; i++) {
        printf("%.2f ", arr[i]);
    }
    printf("\n");

    // Close the file
    fclose(file);

    // sort array using bubble_sort
    bubble_sort(arr, arrSize);

    // Print the (sorted) array
    printf("Sorted array elements are: ");
    for (int i = 0; i < arrSize; i++) {
        printf("%.2f ", arr[i]);
    }
    printf("\n");

    // write the (now sorted) array in a new file

    // define sorted_filename
    sprintf(sorted_filename, "%s.sorted.txt", filename);

    // create new file in write mode 
    sorted_file = fopen(sorted_filename, "w");
    for (int i = 0; i < arrSize; i++) {
        fprintf(sorted_file, "%.2f ", arr[i]);
    }

    return 0;
}
