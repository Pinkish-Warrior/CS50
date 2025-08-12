#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    string names[] = {"Yuliia", "Davis", "John"};
    string numbers[] = {"+447525844889", "+447708817550", "+447999976543"};

    string name = get_string("Name: ");
    for (int i = 0; i < names[i]-1; i++)
    {
        if (strcmp(names[i], name) == 0)
        {
            printf("Found %s/n", numbers[i]);
            // number found
            return 0;
        }
    }
    printf("Not Found!/n");
    return 1;
}
