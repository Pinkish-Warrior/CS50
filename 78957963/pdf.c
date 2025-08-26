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

/* Solution */

// argc = argument count
// argv = argument vector which is an array of pointers to an array of characters objects
int main (int argc, string argv[])
    // create buffer for file, preventing memory leaking
    
