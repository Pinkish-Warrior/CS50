#include <cs50.h>
#include <stdio.h>
#include <string.h>

void swap(int a, int b);

int main(void)
{
    int x = 1;
    int y = 2;
}

void swap(int a, int b)
{
    int tmp = a;
    a = b;
    b = tmp;
}
