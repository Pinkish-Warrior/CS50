# include <cs50.h>


/* pointer refreshner
int* pointer to a type int
*ptr dereferencing - access the value stored at this pointer
&ptr memory address of the variable ptr.
*/


const int CAPACITY = 50;

typedef struct
{
    person people[CAPACITY];
    int size;
}  stack;


