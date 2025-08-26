#include <cs50.h>
#include <stdio.h>
#include <string.h>

// Solution A(my solution)

// read the name of a file and return yes for those .pdf
// check if the sequence is 0x25 0x50 0x44 0x46
// int hasExtension(const char *filename, const char *extension)
// {
//     // find the last dot in the filename
//     const char *dot = strrchr(filename, '.');

//     // no dot means no extension
//     if (!dot || dot == filename)
//     {
//         printf("%s\n", dot);
//         return 0;
//     }
//     // comparing to the extension
//     return strcmp(dot +1, extension) == 0;
// }
// int main(void)
// {
//     string filename = get_string("Provide a name to check: \n");
//     string extension = get_string("Extension: ");
//     {
//         if(hasExtension(filename, extension))
//         {
//             printf("True\n");
//         }
//         else
//         {
//             printf("Try again!\n");
//         }
//     }
// }

/* Guidance */
// Solution B
// int main(int argc, string argv[])

int main(int argc, char *argv[])
{

    // Open file
    FILE *input = fopen(argv[1], "r");

    // Create buffer for file
    uint8_t buffer[4]; // 0x25 0x50 0x44 0x46

    // Create an array of the given signature bytes (%pdf = 0x25, 0x50, 0x44, 0x46)
    uint8_t signature[] = {0x25, 0x50, 0x44, 0x46};

    // Read first four bytes from the file
    fread(buffer, sizeof(uint8_t), sizeof(signature), input);

    // Check or the first four bytes again signature bytes
    for (int i = 0; i < 4; i++)
    {
        if (signature[i] != buffer[i])
        {
            printf("This is not a pdf file!\n");
            return 0;
        }
    }
    // Sucess!
    printf("This is a PDF!\n");

    // Close file
    fclose(input);
}

