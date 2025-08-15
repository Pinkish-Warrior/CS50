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

    // %i => integer pointer of p = 50
    // %d => dereferencing n = 50
    // %p => pointer n = 50

    printf("%i %p\n", *p, &n);
    // 50 0x7ffe15daef0c
    printf("%p %i\n", p, n);
    // 0x7ffe15daef0c 50
}

// understanding pointers and format specifiers in C.
// %i and %d are used for integers. When we use *p with %i or %d, you’re printing the value that p points to.
// %p is used for pointers (addresses). When we use &n with %p, you’re printing the address of n. When you use p with %p, you’re printing the address stored in p, which is also the address of n.
