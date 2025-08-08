#include<cs50.h>
#include <stdio.h>

int main(void)
{
    string greeting = "Hello,";
    string name = get_string("What is your name?\n");
    printf("%s %s!\n", greeting, name);
}
