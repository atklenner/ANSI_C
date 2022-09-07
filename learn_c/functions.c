#include <stdio.h>

int foo(int bar);

void print_big(int x);

int main()
{
    printf("The value of foo is %d\n", foo(1));

    int array[3] = {1, 99, 3};
    int i;

    for (i = 0; i < 3; i++)
    {
        print_big(array[i]);
    }

    return 0;
}

int foo(int bar)
{
    return bar * 2;
}

void print_big(int x)
{
    if (x > 10)
    {
        printf("%d is big", x);
    }
}