#include "conio.h"
#include "stdio.h"
#include "stdlib.h" 
#include "string.h"     // for strcat() -> concatenate strings

int main() {
    // define list of syllables
    char *syllables[] = {"tan", "han", "klam", "ro", "ba", "lo"};
    
    // sizeof(syllables) gives total size in bytes (here 48)
    int sizeSyl = sizeof(syllables);

    // sizeof(syllables[0]) gives the size in bytes of the first string in syllables (here 8)
    int sizeSyl0 = sizeof(syllables[0]);

    // calculate number of strings in syllables
    int numSyl = sizeSyl / sizeSyl0; 
    

    printf("Syllables stored: ");

    // iterate through strings and print them
    for (int syl = 0; syl < numSyl; syl++)
    {
        printf("%s ", syllables[syl]);
    }
    printf("\n");


    // iterate 10 times and generate a word
    for (int wordNr = 1; wordNr <= 10; wordNr++)
    {
        // define how many syllables the word has, between 1 and 5
        int sizeRandWord = rand() % 5 + 1;

        char randWord[50] = "";

        // generate the word; iterate through syllables
        for (int syl = 0; syl < sizeRandWord; syl++)
        {
            strcat(randWord, syllables[rand() % numSyl]);
        }
               
        // Output word#, letters, generated word 
        printf("Generated word #%02d has %2d letters: %s \n", wordNr,strlen(randWord) ,randWord);
    }
    
}
