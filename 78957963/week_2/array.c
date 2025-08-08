#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main() {
    char myString[] = "Hello, World!";
    int length = strlen(myString);
    char lastChar = myString[length - 1]; // Accessing the last character
    printf("length: %i\n", length);
    printf("Last character: %c\n", lastChar);
    return 0;
}


