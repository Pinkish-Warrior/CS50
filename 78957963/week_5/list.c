#include <stdio.h>
#include <cs50.h>
#include <stdlib.h>

typedef struct node
{
    int number;
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
        n->number = get_int("Number: ");
        // (*n).next = NULL;
        n->next = NULL;

        if (list == NULL)
        {
            list = n;
        }
        // if list has numbers already
        else
        {
            for (node *ptr = list; ptr != NULL; ptr = ptr->next)
            {
                // If at end of list
                if (ptr->n == NULL)
                {
                    ptr->next = n;
                    break;
                }
            }
        }
    }

    // time passes

    node *ptr = list;
    while (ptr != NULL)
    {
        printf("%i\n", ptr->number);
        ptr = ptr->next;
    }
}

/* Big O:
O(n^2) - The algorithm's running time grows quadratically with the input size. ex.: nested loop
O(n log n) - The algorithm's running time grows in proportion. ex.: mergesort and quicksort
O(n) - The algorithm's running time grows linearly with the input size. ex.: single loop
O(log n) - The algorithm's running time grows logarithmically with the input size. ex.: binary serach
O(1) - The algorithm's running time is constant, regardless of the input size. ex.: acess an element in an array by index.
*/
