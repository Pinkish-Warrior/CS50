#include <cs50.h>
#include <stdio.h>
#include <stdout.h>
#include <string.h>

// read the name of a file and return yes for those .pdf
// check if the sequence is 0x25 0x50 0x44 0x46
int hasExtension(const char *filename, const char *extension)

    // find the last dot in the filename
    const char *dot = strrchr(filename, '.');

    // no dot means no extension
    if (!dot || dot == filename) return 0;

    // comparing teh extension
    return strcmp(dot +1, extension) == 0;


int main (void)

{

    fscan()
}

/* Guidance */
// int main(int argc, string argv[])

// Open file
FILE *input = fopen(argv[1], "r")

// Create buffer for file
uint8_t buffer[4]

// Read first four bytes from the file

// Check the first four bytes again signature bytes

// Sucess!

// Close file





// Close file
