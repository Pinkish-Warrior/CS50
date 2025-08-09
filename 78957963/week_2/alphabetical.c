#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

// int main(void)
int main(int argc, string argv[])
{
    // get user input
    if (argc != 2)
    {
        printf("Please provide a set or characters to check e.g.: algorithm\n");
        return 1;
    }

    // string user_input = get_string("Input: \n");
    string user_input = argv[1];

    for (int i = 0; i < strlen(user_input); i++)
    {
        if (!isalpha(user_input[i]))
        {
            printf("This isn't a letter, please enter a letter.\n");
            return 2;
        }
    }

    // get length
    int len = strlen(user_input);

    // interate through
    for (int i = 1; i < len; i++)
    {
        // check its order if alphabetical
        if (user_input[i] < user_input[i - 1])
        {
            printf("NO\n");
            return 0;
        }
    }

    // Print out YES or NO

    printf("YES\n");
    return 0;
}
