#include <stdio.h>

typedef struct
{
    char *name;
    int age;
} person;

void addon(int *n);

void addone(int *n)
{
    (*n)++;
}

void birthday(person *p);

void birthday(person *p)
{
    p->age++;
}

int main()
{
    int n = 1;
    printf("Before: %d\n", n);
    addone(&n);
    printf("After: %d\n", n);

    person john;
    john.name = "John";
    john.age = 27;

    printf("%s is %d years old.\n", john.name, john.age);
    birthday(&john);
    printf("Happy birthday! %s is now %d years old.\n", john.name, john.age);

    return 0;
}
