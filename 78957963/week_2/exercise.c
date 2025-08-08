#include<cs50.h>
#include<stdio.h>


// create a array of size 5
// where el is two times the previous
// and the first elelment is 1
// for (int i = 0; i < height; i++)
// char mybytes[5] = [1, 2, 4, 8, 16]

// int main(void)
// {
//     int byteprogression = for(int i = 1; i <= 5 < i++)
//     {
//         printf("%i" ** 2, byteprogression);
//     }
//     return 0
// }

int const SIZE = 5;

int main(void)
{
    int numbers[SIZE] = {1, 2, 3, 4, 5};

    for(int i = 0; i < SIZE; i++)
    {
        int doubleUp = numbers[i] * 2;
        printf("%i ", doubleUp);
    }
    return 0;
}
