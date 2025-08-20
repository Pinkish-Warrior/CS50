#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    // open or create a file "phonebook.csv" in append mode ("a")
    FILE *file = fopen("phonebook.csv", "a");
    if (file == NULL)
    {
        printf("Error opening the file. \n");
        return 1;
    }

    // Prompt user for a name
    char *name = get_string("Name: ");
    if (name == NULL) // check if memory allocation failed.
    {
        printf("Error: Could not read number. \n");
        fclose(file); // close file before exiting
        return 1;
    }

    // Prompt user for a number
    char *number = get_string("Number: ");
    if (number == NULL) //checking if memmory allocation failed
    {
        printf("Error: Could not read number. \n");
        fclose(file); // Close file before exiting
        return 1;
    }

    // write the name and number in the file creted
    fprintf(file, "%s, %s\n", name, number);

    // close the file ro save and free resources
    fclose(file);

    // exiting with success code
    return 0;
}
