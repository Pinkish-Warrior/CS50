#include <cs50.h>
#include <stdio.h>

void print_row(int bricks);

// Task - create piramide for mario
int main(void)
{
    int height;
    do
    {
        // prompt user for input
        height = get_int("Enter a positive value for the height \n");
    }
    while (height < 1);

    // print a pyramid of that height
    for (int i = 0; i < height; i++)
    {
        print_row(i + 1);
    }
}

void print_row(int bricks)
{
    for (int i = 0; i < bricks; i++)
    {
        printf("#");
    }
    printf("\n");
}
