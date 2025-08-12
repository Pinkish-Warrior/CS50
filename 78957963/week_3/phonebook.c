#include<stdio.h>
#include<cs50.h>

int main(void)
{
    string names[] = {"Yuliia", "Davis", "John"};
    string numbers[] = { "+447525844889","+447708817550","+447999976543"};

    string name = get_string("Name: ");
    for (i = 0; i < names[1]; i++)
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
