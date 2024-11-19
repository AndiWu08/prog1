#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define MAX_NUMBER 1000

double sum_of_array(double array[], int arraySize) {
    double sum = 0;
    
    for (int i = 0; i < arraySize; i++)
    {
        sum += array[i];
    }
    
    return sum;
}

double avg_of_array(double array[], int arraySize) {
    double sum = sum_of_array(array, arraySize);
    
    return sum / arraySize;
}

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


double median_of_array(double array[], int arraySize) {
    // sort the array
    bubble_sort(array, arraySize);

    // calculate median of sorted array
    if (arraySize % 2 == 0)
    {
        return (array[arraySize / 2] + array[arraySize / 2 - 1]) / 2;
    }
    else
    {
        return array[arraySize / 2];
    }
}


int main() {
    FILE *file;
    char filename[100];
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
        // Try to parse a number from the line
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

    // calculate sum of array
    sum = sum_of_array(arr, arrSize);

    // calculate average of array
    avg = avg_of_array(arr, arrSize);

    // calculate median of array
    median = median_of_array(arr, arrSize);

    // Print the result
    printf("The sum of the numbers in the dataset is: %.2f\n", sum);
    printf("The average of the numbers in the dataset is: %.2f\n", avg);
    printf("The median of the numbers in the dataset is: %.2f\n", median);

    return 0;
}
