#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>

int main() {
    // Allocate space for an array of one string pointer
    // all_notes is a pointer which references pointers to the string == single note
    char** all_notes = malloc(sizeof(char*) * 1);
    if (all_notes == NULL) {
        fprintf(stderr, "Memory allocation failed.\n");
        return 1;
    }

    // counter to keep track of the notes taken
    int nr_notes = 0;

    while (1)
    {

        printf("Simple notebook for storing notes.\n");
        printf("Menu:\n");
        printf("1) Enter a new note\n");
        printf("2) Show all notes taken so far\n");
        printf("3) Exit program\n\n");

        char c = _getch();

        if (c == '3')
        {
            break;
        }

        if (c == '1')
        {
            char str[100];
            printf("\nEnter your new note: \n");
            // DOESNT WORK
            fgets(str, sizeof(str), stdin);

            // Allocate memory for the string with the size of the string
            all_notes[nr_notes] = malloc(strlen(str) + 1);
            if (all_notes[nr_notes] == NULL) {
                fprintf(stderr, "Memory allocation for string failed.\n");
                free(all_notes); // Free previously allocated memory
                return 1;
            }

            // Copy a string into the allocated space
            strcpy(all_notes[nr_notes], "Hello, world!");
            nr_notes++;
        }
        

        if (c == '2')
        {
            // print all existing notes
            printf("Notes stored so far: \n");
            for (int i = 0; i < nr_notes; i++)
            {
                printf("Note #%d: %s \n", i, all_notes[i]);
            }
        }
        
        
    }

    // Free the allocated memory all string
    for (int i = 0; i < nr_notes; i++)
    {
        free(all_notes[i]);
    }
    
    // Free the array of string pointers
    free(all_notes);

    return 0;
}
