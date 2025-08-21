#include <cs50.h>
#include <string.h>
#include <stdio.h>
#include <stdint.h>

typedef uint8_t BYTE;


// argv[] represents a string, since there arent any strings in C but a array of chars
int main(int argc, char *argv[])

{
    // source file to read byte
    FILE *src = fopen(argv[1], "rb");
    // destination source to write byte
    FILE *dst = fopen(argv[2], "wb");

    BYTE b;


    // while read the address of the byte on the size of a byte(byte by byte), read 1 at time from the source file till is NUll.
    while(fread(&b, sizeof(b), 1, src) !=0)
    {
        // write it byte by byte
        fwrite(&b, sizeof(b), 1, dst);
    }

    fclose(dst);
    fclose(src);
}


// fopen
// fclose
// fprintf
// fscanf
// fread
// fwrite
// fseek


