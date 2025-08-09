#include <cs50.h>
#include <stdbool.h>
#include <stdio.h>

int main(void)
{
    // Create a array of numbers
    int numbers[] = {20, 500, 10, 5, 100, 1, 50};

    bool found = false;
    int max_attempts = 3;

    // Loop for max attempts
    for (int count = 1; count <= max_attempts; count++)
    {

        int n = get_int("Attempt %i - Enter a number: \n", count);

        for (int i = 0; i < 7; i++)
        {
            if (numbers[i] == n)
            {
                printf("Well done, it is a match!!!\n");
                found = true;
                break;
            }
        }

        if (found)
        {
            return 0;
        }

        if (count < max_attempts)
        {
            printf("Keep Trying!!\n");
        }
        else
        {
            printf("You have no attempts left, goodbye \n");
        }
    }
    // successful
    return 0;
}
