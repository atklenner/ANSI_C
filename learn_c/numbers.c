#include <stdio.h>

int main()
{
    int foo;
    int bar = 1;
    printf("%d\n", foo); // who knows
    printf("%d\n", bar);

    int a = 0, b = 1, c = 2, d = 3, e = 4;
    a = b - c + d * e;
    printf("%d\n", a);
    int sum = a + b + c;
    printf("%d", sum);

    return 0;
}
