# include <cs50.h>


/* pointer refreshing
int* pointer to a type int
*ptr dereferencing - access the value stored at this pointer
&ptr address of the variable ptr
*/


const int CAPACITY = 50;

typedef struct
{
    person people[CAPACITY];
    int size;
}  queue;


