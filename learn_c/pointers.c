#include <stdio.h>

int main()
{
    char *name = "John";
    int a = 1;
    int *pointer_to_a = &a; // & returns the memory address, making the variable a pointer

    printf("The value a is %d\n", a);
    printf("The value of a is also %d\n", *pointer_to_a); // * dereferences the pointer, it makes the pointer become the value it is pointing at

    a += 1;
    *pointer_to_a += 1;
    printf("The value of a is now %d\n", a);

    int n = 10;

    /* your code goes here */
    int *pointer_to_n = &n;
    *pointer_to_n += 1;
    /* testing code */
    if (pointer_to_n != &n)
        return 1;
    if (*pointer_to_n != 11)
        return 1;

    printf("Done!\n");

    return 0;
}