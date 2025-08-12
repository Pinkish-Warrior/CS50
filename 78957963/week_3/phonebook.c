#include<stdio.h>
#include<cs50.h>
#include<string.h>

int main(void)
{
    string names[] = {"Yuliia", "Davis", "John"};
    string numbers[] = { "+447525844889","+447708817550","+447999976543"};

    string name = get_string("Name: ");
    for (int i = 0; i < strlen(names[i]); i++)
    {
        if(strcmp names[i], name) == 0)
        {
            printf("Found %s/n", numbers[i]);
            // number found
            return 0;
        }
    }
    printf("Not Found!"\n);
    return 1:
}
