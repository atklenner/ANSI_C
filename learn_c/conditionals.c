#include <stdio.h>

void guessNumber(int guess)
{
    int correctValue = 555;

    if (guess < correctValue)
    {
        printf("Your guess is too low.\n");
    }
    else if (guess > correctValue)
    {
        printf("Your guess is too high.\n");
    }
    else
    {
        printf("Correct. You guessed it!\n");
    }
}

int main()
{
    int target = 10;
    if (target == 10)
    {
        printf("Target is equal to 10\n");
    }

    int foo = 1;
    int bar = 2;
    int moo = 3;

    if (foo < bar)
    {
        printf("foo is smaller than bar\n");
    }
    else if (foo == bar)
    {
        printf("foo is equal to bar\n");
    }
    else
    {
        printf("bar is smaller than foo\n");
    }

    if (foo < bar && moo > bar)
    {
        printf("foo is smaller than bar AND moo is larger than bar.\n");
    }

    if (foo < bar || moo > bar)
    {
        printf("foo is smaller than bar OR moo is larger than bar.\n");
    }

    guessNumber(500);
    guessNumber(600);
    guessNumber(555);

    return 0;
}