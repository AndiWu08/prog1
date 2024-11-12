/* Write a C program that
reads three integer (int) numbers from the user using scanf_s()
computes the sum, product and average
and outputs all three values (sum, product, average)!
Play with this program with different numbers for input! Does it always compute correctly? */

#include "stdio.h"

int main() {

    int a, b, c;
    printf("Enter 3 integers seperated by ',': ");
    scanf("%d, %d, %d", &a, &b, &c);

    int sum = a + b + c;
    int product = a * b * c;
    int avg = sum/3;

    printf("sum: %d, product: %d, average: %d", sum, product, avg);
}