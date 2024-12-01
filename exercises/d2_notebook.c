#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>

int main() {
    // Allocate space for an array of one string pointer
    // all_notes is a pointer which references pointers to the string == single note
    char **all_notes = malloc(sizeof(char*) * 1);
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

        if (c == '1')
        {
            char new_note[100];
            printf("\nEnter your new note: \n");
            fgets(new_note, sizeof(new_note), stdin);

            // Remove \n from the string
            new_note[strcspn(new_note, "\n")] = '\0';

            // Allocate memory for the string with the size of the string 
            all_notes[nr_notes] = malloc(strlen(new_note) + 1);     // +1 for NULL terminator

            // check if allocation failed
            if (all_notes[nr_notes] == NULL) {
                fprintf(stderr, "Memory allocation for string failed.\n");
                free(all_notes); // Free previously allocated memory
                return 1;
            }

            // Copy a string into the allocated space
            strcpy(all_notes[nr_notes], new_note);
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
        
        if (c == '3')
        {
            break;
        }
    } // end of while

    // Free the allocated memory for all strings
    for (int i = 0; i < nr_notes; i++)
    {
        free(all_notes[i]);
    }
    
    // Free the array of string pointers
    free(all_notes);

    return 0;
}
