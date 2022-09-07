#include <stdio.h>

int main()
{
    // char *name = "John Smith"; // can only be read, not manipulated
    // int age = 27;

    char otherName[] = "Andrew Klenner"; // can be manipulated
    // the empty brackets tell the compiler to calculate the size
    // if we wanted to specify we need to add a character
    // for the string termination, i.e.
    // char otherName[15] = "Andrew Klenner";
    // is one longer than the written string

    // printf("%s is %d years old.\n", name, age);
    // printf("%d\n", strlen(otherName));

    // char *firstName = "John";

    // if (strncmp(name, "John", 4) == 0)
    // {
    //     printf("Hello, John!\n");
    // }
    // else
    // {
    //     printf("You are not John. Go away.\n");
    // }

    char dest[20] = "Hello";
    char src[20] = "World";
    strncat(dest, src, 3);
    printf("%s\n", dest);
    strncat(dest, src, 10);
    printf("%s\n", dest);

    /* define first_name */
    char *first_name = "John";
    /* define last_name */
    char last_name[] = "Doe";
    char name[100];

    last_name[0] = 'B';
    sprintf(name, "%s %s", first_name, last_name);
    if (strncmp(name, "John Boe", 100) == 0)
    {
        printf("Done!\n");
    }
    name[0] = '\0';
    strncat(name, first_name, 4);
    strncat(name, last_name, 20);
    printf("%s\n", name);
    return 0;
}