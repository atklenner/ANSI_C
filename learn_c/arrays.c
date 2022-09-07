#include <stdio.h>

int main()
{
    int numbers[10];

    numbers[0] = 10;
    numbers[1] = 20;
    numbers[2] = 30;
    numbers[3] = 40;
    numbers[4] = 50;
    numbers[5] = 60;
    numbers[6] = 70;

    printf("The 7th number in the array is %d\n", numbers[6]);

    /* TODO: define the grades variable here */
    int grades[3];
    int average;

    grades[0] = 80;
    /* TODO: define the missing grade
        so that the average will sum to 85. */
    grades[1] = 85;
    grades[2] = 90;

    average = (grades[0] + grades[1] + grades[2]) / 3;
    printf("The average of the 3 grades is: %d", average);

    return 0;
}