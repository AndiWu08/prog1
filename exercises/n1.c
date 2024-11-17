/* Write a C program that reads three syllables from the user and then generates all words that consist of two of the syllables entered.

Example program run #1:

         Enter syllable #1: do
         Enter syllable #2: te
         Enter syllable #3: ma
         dodo
         dote
         doma
         tedo
         tete
         tema
         mado
         mate
         mama 
         
addition with for k => every possible combination with all three syllables
         */

#include <stdio.h>

int main() {
    char word1[20];
    char word2[20];
    char word3[20];

    //read 3 syllables
    printf("Enter syllable #1: ");
    scanf("%s", word1);

    printf("Enter syllable #2: ");
    scanf("%s", word2);

    printf("Enter syllable #3: ");
    scanf("%s", word3);

    // 3 syllables -> 3 for loops to run throug every possible combination of words with 3 syllables
    for (int i = 1; i <= 3; i++)
    {
        for (int j = 1; j <= 3; j++)
        {
            for (int k = 1; k <= 3; k++)
            {

                switch (i)
                {
                    case 1:
                        printf("%s", word1);
                        break;
                    case 2:
                        printf("%s", word2);
                        break;
                    case 3:
                        printf("%s", word3);
                        break;

                }

                switch (j)
                {
                    case 1:
                        printf("%s", word1);
                        break;
                    case 2:
                        printf("%s", word2);
                        break;
                    case 3:
                        printf("%s", word3);
                        break;

                }

                switch (k)
                {
                    case 1:
                        printf("%s", word1);
                        break;
                    case 2:
                        printf("%s", word2);
                        break;
                    case 3:
                        printf("%s", word3);
                        break;

                }

                printf("\n");
            }
            
        }
    }
}