#include <cs50.h>
#include <stdio.h>

int main(void)
{
    char ch = get_char("Do you agree? ");
    //     in C Language we are only allowed to use single quote, for a character as a convention.
    if (ch == 'y' || ch == 'Y')
    {
        printf("Agreed.\n");
    }
    else if (ch == 'n' || ch == 'N')
    {
        printf("Not Agreed.\n");
    }
}
