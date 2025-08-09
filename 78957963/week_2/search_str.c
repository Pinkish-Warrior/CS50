#include<cs50.h>
#include<stdio.h>
#include<string.h>

int main(void)
{
    string strings[] = {"battleship", "boot", "cannnon", "iron", "thimple", "top hat"};
    printf("%s\n", strings[]);
    string input_string = get_string("String: ");

    int word_count = sizeof(strings) / sizeof(strings[0]);
    for(int i = 0; i < len(input_string); i++)
    {
        printf("%s\n", words[i]);
    }
}

