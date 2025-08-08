#include <cs50.h>
#include <stdio.h>
#include <string.h>

// int main(void)
int main(int argc, string argv[])
{
    // get user input
    if (argc != 2)
    {
        printf("Please provide a word.\n");
        return 1;
    }
    // string user_input = get_string("Input: \n");
    string user_input = argv[1];

    // get length
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

    // Print out YES or NO
    printf("YES\n");
    return 0;
}
