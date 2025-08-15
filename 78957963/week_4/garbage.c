#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    int *x;
    int *y;

    // pointer memory allocation to a pointee
    x = malloc(sizeof(int));

    // assigned integer to a pointer x
    *x = 42;

    // now assigning the value of x to y
    y = x;

    // following assigning this value to a pointer y
    *y = 13;
