#include <cs50.h>
#include <stdio.h>


int x = 2;
int *p = &x;

int main(void)
{
    // *p = 9;
    printf("This is my address in memory: %p\n", &x);
    printf("This is my value: %i\n", *p);
    printf("the result is: %i\n", *p - 2);
    printf("the result is: %i\n", x); // this doesen't not change the value of x, only prints what is requested to the console, unless explicitily changed.
}
// pointer are really handy when comes to manipulate files.

