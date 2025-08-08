#include<cs50.h>
#include<stdio.h>

// Constant
const int N = 3;


// Prototype
int main(void)
{

    int scores[N];
    for (int i = 0; i < N; i++)
    {
        scores[i]= get_int("Score: ");
    }

    // scores[0] = 72;
    // scores[1] = 73;
    // scores[2] = 33;


    printf("Average: %f\n", (scores[0] + scores[1] + scores[2]) / (float) N);
}
