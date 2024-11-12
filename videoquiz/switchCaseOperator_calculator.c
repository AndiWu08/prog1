#include <stdio.h>

int main() {
    char operator = '/';
    int num1 = 10, num2 = 5;
    int result;

    switch (operator) {
        case '+':
            result = num1 + num2;
            printf("Ergebnis: %d\n", result);
            break;
        case '-':
            result = num1 - num2;
            printf("Ergebnis: %d\n", result);
            break;
        case '*':
            result = num1 * num2;
            printf("Ergebnis: %d\n", result);
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
                printf("Ergebnis: %d\n", result);
            } else {
                printf("Fehler: Division durch Null\n");
            }
            break;
        default:
            printf("Ungültiger Operator\n");
    }

    return 0;
}
