#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    // memory allocation for the pointer of size per following
    int *x = malloc(3 * sizeof(int));

    // values being stored in memory location pointed by x.
    x[0] = 72;
    x[1] = 73;
    x[2] = 33;

    // free up the memore used(preventing memory leaks)
    free(x);
}
