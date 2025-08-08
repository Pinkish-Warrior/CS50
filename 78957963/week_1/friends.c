#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Name
    string name = get_string("What's is your name\n");

    // Age
    int age = get_int("Please provide your age\n");

    // Hometown
    string hometown = get_string("Where are you from originaly\n");

    // Phone
    string phone = get_string("Provide you telephone number\n");

    // Print data
    printf("Hello, %s!\n", name);
    printf("You are %d, from %s. your phone number is: %s \n", age, hometown, phone );
}

