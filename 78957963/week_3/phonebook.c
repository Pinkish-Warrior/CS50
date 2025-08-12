#include <cs50.h>
#include <stdio.h>
#include <string.h>

// int main(void)
// {
//     string names[] = {"Yuliia", "David", "John"};
//     string numbers[] = {"+447525844889", "+447708817550", "+447999976543"};

//     string name = get_string("Name: ");
//     for (int i = 0; i < sizeof(names) / sizeof(names[0]); i++)
//     {
//         if (strcmp(names[i], name) == 0)
//         {
//             printf("Found %s\n", numbers[i]);
//             // number found
//             return 0;
//         }
//     }
//     printf("Not Found!\n");
//     return 1;
// }

// Refactoring

// structure

typedef struct
{
    string name;
    string number;
}
person;

int main(void)
{
    person people[3];
    people[0].namme = "Yuliia";
    people[0].number = "+447525844889";

    people[1].namme = "David";
    people[1].number = "+447708817550";

    people[2].namme = "John";
    people[2].number = "+447999976543";

    string name = get_string("Name: ");
    for (int i = 0; i < 3; i++)
    {
        if (strcmp(people[i], people) == 0)
        {
            printf("Found %")
        }
    }
}
