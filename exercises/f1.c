#include <stdio.h>

// Funktionsdeklaration
void statistics(int n1, int n2, int n3, int *sum, float *avg);

int main () {
    for (int n1 = 0; n1 <= 5; n1++)
    {
        for (int n2 = 0; n2 <= 5; n2++)
        {
            for (int n3 = 0; n3 <= 5; n3++)
            {
                int sum;
                float avg;

                // Funktion statistics() aufrufen
                statistics(n1, n2, n3, &sum, &avg);

                printf("n1: %d, n2: %d, n3: %d --> Summe: %d, Differenz: %.2f\n", n1, n2, n3, sum, avg);
            }
            
        }
        
    }
    
}

// Funktionsdefinition
void statistics(int n1, int n2, int n3, int *sum, float *avg) {
    *sum = n1 + n2 + n3;
    *avg = (*sum)/3.0;
}