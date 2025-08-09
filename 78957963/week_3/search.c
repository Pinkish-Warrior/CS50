#include <cs50.h>
#include <stdbool.h>
#include <stdio.h>

int main(void)
{
    // create a array
    int numbers[] = {20, 500, 10, 5, 100, 1, 50};
    int n = get_int("Enter a number: \n");
    bool found = false;
    int max_attempts = 3;

    for (int count = 1; count <= max_attempts; count++)
    {
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
        else

        {
            found = false;

            n = get_int()
            if (count == max_attempts){
                printf("You have no attempts left, godbye");
                break;
            }
        }
        return 0;
    }
}
