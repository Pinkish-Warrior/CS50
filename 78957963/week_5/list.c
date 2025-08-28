#include <stdio.h>
#include <cs50.h>
#include <stdlib.h>

typedef struc node
{
    int number
    struct node *next;
} node;


int main(void)
{
    /* Initial approach */
    // int list[3];
    // list[0] = 1;
    // list[1] = 2;
    // list[2] = 3;

    // for (int i = 0; i < 3; i++)
    // {
    //     printf("%i\n", list[i]);
    // }

    /* Second approach */
    // int *list = malloc(3 * sizeof(int));


    /* Third approach */
    node *list = NULL;
    for (int i = 0; i < 3; i++)
    {
        node *n = malloc(sizeof(node));
        if(n == NULL)
        {
            return 1;
        }
        // (*n).number = get_int("Number: ");
        n -> number = get_int("Number: ");
        // (*n).next = NULL;
        n -> next = list

        list = n;
    }

    // time passes

    node * ptr
}
