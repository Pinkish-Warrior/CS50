#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    int scores[1024];

    for (int i = 0; i < 1024; i++)
    {
        printf("%i\n", scores[i]);
    }

    printf("Hello World from C");
    // Allways remember to free up memory before exiting the program
}
