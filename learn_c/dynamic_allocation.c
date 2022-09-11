#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    char *name;
    int age;
} person;

typedef struct
{
    int x;
    int y;
} point;

int main()
{
    person *myperson = (person *)malloc(sizeof(person));
    myperson->name = "John";
    myperson->age = 27;
    free(myperson);

    point *mypoint = malloc(sizeof(point));

    /* Dynamically allocate a new point
       struct which mypoint points to here */

    mypoint->x = 10;
    mypoint->y = 5;
    printf("mypoint coordinates: %d, %d\n", mypoint->x, mypoint->y);

    free(mypoint);

    return 0;
}