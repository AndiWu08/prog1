#include "stdio.h"  // printf and scanf

int main() {
    // Rest ausrechnen ohne modulo
    int a = 15;
    int b = 4;

    int rest = a - ((a/5)*b);
    printf("rest: %d\n", rest);

    for (int i = 0; i < 100; i++)
    {
        if (i%5==0)
        {
            printf("%d ", i);
        }
        
    }
    

}