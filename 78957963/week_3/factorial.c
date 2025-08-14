#include <cs50.h>
#include <stdio.h>
#include <string.h>


// Factorial is the sum of all numbers from 1 to number.

// factorial of 1 => 1
// factorial of 2 = 2 * 1 => 2
// factorial of 3 = 3 * 2 * 1 => 6
// factorial of 4 = 4 * 3 * 2 * 1 => 24
// factorial of 5 = 5 * 4 * 3 * 2 * 1 => 120

int f(int n);
int main(void)
{
    //Get user input
    int number;
    do
    {
        number = get_int("Number : \n");
    }
    while (number < 0);
    int result = f(number);
    printf("Factorial of %i is %i\n", number, result);

}
int f(int n)
{
    // Base Case
    if (n == 0)
    {
        return 1;
    }
    else
    {
        // Recursive
        return n * f(n -1);
        printf("\n");
    }
}
