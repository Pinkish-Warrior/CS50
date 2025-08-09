#include <cs50.h>
#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    // create a array
    int numbers[] = {20, 500, 10, 5, 100, 1, 50};
    int n = get_int("Enter a number: \n");
    bool found = false;
    int max_attempts = 3;

    for(int count =1; count <= max_attempts; count++)
    {
        for (int i = 0; i < 7; i++)
        {
            if (numbers[i] == n)
            {
                printf("match\n");
                found = true;
                break;
            }
        }
        count = 0;

        if (found)
        {
            return 0;
        }
        else

        count = count++;
    {
        printf("keep trying!!\n");
        {
            found = false;

            {
                printf("Keep trying");
            }

            if (count == 3)
            break;

        }
    }
    return 0;
}
