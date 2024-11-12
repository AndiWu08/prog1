#include "stdio.h"  // printf and scanf
#include "stdlib.h" // rand -> random numbers
# include "time.h"


int main() {
    // initialize random
    srand(time(NULL));
    char con = 'y';          // '' -> einzelne Zeichen; "" -> Zeichenketten/Strings
    
    do
    {
        printf("the dice has fallen %d", rand() % 6 +1);        // %6 -> Rest bei Div mit 6 => 0,,,,,5 +1 => Würfel

        printf("\n do you want to continue? y/n ");
        scanf(" %c", &con);                 // Leerzeichen vor c damit Eingabe richtig eingelesen wird bei char; ohne Leerzeichen wird Tastaturpuffer nicht gelöscht

        // alle Zeichen aus Tastaturpuffer löschen bis Enter/Zeilenumbruch
        while (getchar() != '\n');
                

    } while (con == 'Y' || con == 'y' || con == '1');       // '' -> einzelne Zeichen; "" -> Zeichenketten/Strings

    
}
