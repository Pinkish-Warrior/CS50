#include <cs50.h>
#include <stdio.h>
#include <string.h>

// & address operators lecture
// * dereference operator
// %p pointers

// int *p = &n - it reads left to right => whatever value of n is get it and asigned to the veriable p, which is a pointer this case an integer)

int main(void)
{
    int n = 50;
    int *p = &n; //conventional way

    printf("%i %d\n", *p, n);
}

