#include<cs50.h>
#include<stdio.h>
#include<string.h>

// Define data structs

typedef struct {
    string name;
    int votes;
} candidate;

int main(void)
{
    // Define number of candidates, in this case the saze of the array [num] which ahs
    const int num = 3;
    candidate candidates[num];

    // populate array user's input

    for (int i = 0; i < num; i++)
    {
        candidates[i].name = get_string("Candidate: ");
        candidates[i].votes = get_int("Votes: ");
    }
    // searching for the higher candidates
    int highest_vote = 0;

    for (int i = 0; i < num; i++)
    {
        if (candidates[i].votes > highest_vote)
        {
            // keep track of the highest_vote
            highest_vote = candidates[i].votes;
        }
    }
    for (int i = 0; i < num; i++)
    {
        if (candidates[i].votes == highest_vote)
        {
           printf("Congratulations %s, with %i is now the winner🏆 \n", candidates[i].name, highest_vote);
        }
    }

}

