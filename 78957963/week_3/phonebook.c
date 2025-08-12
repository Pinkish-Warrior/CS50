#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    string names[] = {"Yuliia", "David", "John"};
    string numbers[] = {"+447525844889", "+447708817550", "+447999976543"};

    // refactoring :


    string name = get_string("Name: ");
    for (int i = 0; i < sizeof(names) / sizeof(names[0]); i++)
    {
        if (strcmp(names[i], name) == 0)
        {
            printf("Found %s\n", numbers[i]);
            // number found
            return 0;
        }
    }
    printf("Not Found!\n");
    return 1;
}
