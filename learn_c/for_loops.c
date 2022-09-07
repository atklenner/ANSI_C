#include <stdio.h>

int main()
{
    int i;
    for (i = 0; i < 10; i++)
    {
        printf("%d\n", i);
    }

    int array[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int sum = 0;
    int j;

    for (j = 0; j < 10; j++)
    {
        sum += array[j];
    }

    int k;
    int factorial = 1;

    for (k = 0; k < 10; k++)
    {
        factorial *= array[k];
    }

    printf("Sum of the array is %d\n", sum);
    printf("10! is %d.\n", factorial);

    return 0;
}