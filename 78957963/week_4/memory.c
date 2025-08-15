#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    // memory allocation for the pointer of size per following
    int *x = malloc(3 * sizeof(int));

    if (x == NULL)
    {
        printf("Memory allocation failed\n");
        return 1;
    }

    // values being stored in memory location pointed by x.
    x[0] = 72;
    x[1] = 73;
    x[2] = 33;

    if (x != NULL)

        printf("%d %d %d \nMemory aloccated succesfully.\n", x[0], x[1], x[2]);

    // freeing up memory used(preventing memory leaks)
    free(x);

    // avoiding dangling pointers
    x = NULL;
    return 0;
}
