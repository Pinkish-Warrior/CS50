#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    // how to get_int works under the hood
    // int n = get_int("n: ");
    // printf("n: %i\n", n);

    // int n;
    // printf("Enter a number: ");
    // scanf("%i", &n);
    // printf("n: %i\n", n);

    // how to get_string works under the hood
    // string s = get_string("s: ");
    // printf("s: %s\n", s);

    char *s = malloc(3 * sizeof(char));
    printf("Enter a string: ");
    scanf("%s", s);
    printf("s: %s\n", s);

}
