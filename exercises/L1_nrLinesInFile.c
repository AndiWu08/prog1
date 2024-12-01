#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

int main() {
    FILE *file;
    char filename[256];
    char line[100];
    int line_counter = 0;

     // Prompt the user for the filename
    printf("Enter file name with absolute path --> ");
    fgets(filename, sizeof(filename), stdin);

    // Remove \n from the string
    filename[strcspn(filename, "\n")] = '\0';


    // Open the file for reading
    file = fopen(filename, "r");
    if (file == NULL) {
        printf("Error: Could not open file %s\n", filename);
        return 1;
    }

    // read each line and count lines
    while (fgets(line, sizeof(line), file) != NULL)
    {
        line_counter++;
    }
    
    printf("%d", line_counter);
}