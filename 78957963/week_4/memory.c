#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    // memory allocation for the pointer of size per following
    int *x = malloc(3 * sizeof(int));

    // integers to be alocated in memory
    x[0] = 72;
    x[1] = 73;
    x[2] = 33;

    // free up the memore used
    free(x);
}
