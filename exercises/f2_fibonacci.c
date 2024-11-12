#include <stdio.h>     // for printf()
#include <time.h>      // for clock()

// declare functions
int fibonacci_recursive(int n);
int fibonacci_interative(int n);

int main() {
    int n = 45;
    int n2 = 30;

    clock_t start, end;

    printf("function and speed test:\n");

    // Startzeit erfassen
    start = clock();

    //Funktion aufrufen
    printf("F(%d) recursive: %d\n", n, fibonacci_recursive(n));

    // Endzeit erfassen
    end = clock();

    // Zeit berechnen (als double) und ausgeben
    printf("time recursive: %f\n",((double)(end - start)) / CLOCKS_PER_SEC);

    // Folge berechnen und Zeit stoppen iterativ n1
    start = clock();
    printf("F(%d) interative: %d\n", n, fibonacci_interative(n));
    end = clock();
    printf("time iterative: %f\n",((double)(end - start)) / CLOCKS_PER_SEC);

    // Folge berechnen und Zeit stoppen rekursiv n2
    start = clock();
    printf("F(%d) recursive: %d\n", n2, fibonacci_recursive(n2));
    end = clock();
    printf("time recursive: %f\n",((double)(end - start)) / CLOCKS_PER_SEC);

    // Folge berechnen und Zeit stoppen iterativ n2
    start = clock();
    printf("F(%d) iterative: %d\n", n2, fibonacci_interative(n2));
    end = clock();
    printf("time iterative: %f\n",((double)(end - start)) / CLOCKS_PER_SEC);



}

// define function
int fibonacci_recursive(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;
    return fibonacci_recursive(n-1) + fibonacci_recursive(n-2);
}

int fibonacci_interative(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;

    int a = 0, b = 1, result;
    for (int i = 2; i <= n; i++)
    {
        result = a + b;
        a = b;
        b = result;
    }
    return result;
    
}
