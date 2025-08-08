#include <cs50.h>
#include <stdio.h>

void meow(void);

int main(void)
{
    for (int i = 0; i < 3; i++)
    {
        meow();
    }
}

// best practice - function meow is called in the main
void meow(void)
{
    printf("meow\n");
}


// while loop
// {
//     int i = 1;
//     while(i < 4)
//     {
//         printf("meow from the 'while' loop\n");
//         i++;
//     }
// }

// for loop
// {
//     for (int i = 0; i < 3; i++);
//     printf("Meow from the 'for'loop\n");
// }
