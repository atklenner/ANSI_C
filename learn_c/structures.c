#include <stdio.h>

int main()
{
    // struct point
    // {
    //     int x;
    //     int y;
    // };
    // struct point p;
    // p.x = 10;
    // p.y = 5;

    typedef struct // this allows us to create a whole new data type
    {
        int x;
        int y;
    } point;

    point p;

    typedef struct
    {
        char *brand;
        int model;
    } vehical;

    vehical mycar;
    mycar.brand = "Ford";
    mycar.model = 2007;

    typedef struct
    {
        char *name;
        int age;
    } person;

    person john;

    /* testing code */
    john.name = "John";
    john.age = 27;
    printf("%s is %d years old.", john.name, john.age);

    return 0;
}