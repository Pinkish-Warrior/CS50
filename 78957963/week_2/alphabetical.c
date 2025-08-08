#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    // get user input
    string user_input = get_string("Input: \n");

    // get lenght once
    int len = strlen(user_input);

    // interate through
    for (int i = 1; i < len; i++)
    {
        printf("%c \n", user_input[i]);
        // check its order if alphabetical
        if (user_input[i] < user_input[i - 1])
        {
            printf("NO\n");
            return 0;
        }
    }

    //Print out YES or NO
    printf("YES\n");
    return 0;
}
