#include <stdio.h>

FILE *input = fopen("hi.txt", "r");


int main (void)
{
    fopen();
    // read from input file four blocks size of 1 bit store it in buffer
        fread(buffer, 1, 4, input);
    // write to output file four blocks size of 1 bit store it in buffer
        fwrite(buffer, 1, 4, output);
    fclose();
}
