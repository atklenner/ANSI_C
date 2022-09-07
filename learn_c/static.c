#include <stdio.h>

int runner()
{
    static int count = 0;
    count++;
    return count;
}

static void fun(void)
{
    printf("This is a static function");
}

int sum(int num)
{
    static int sum = 0;
    sum += num;
    return sum;
}

int main()
{
    printf("%d\n", runner());
    printf("%d\n", runner());
    printf("%d ", sum(55));
    printf("%d ", sum(45));
    printf("%d ", sum(50));
    return 0;
}