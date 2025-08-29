/* Inserting Names on our list

a
b -> Birdo
c
d
e
f
g
h
i
j
k
l -> Luidi -> Lakitu‼️ (Colusion)
m -> Mario
n
o
p -> Peach
q
r
s
t
u
w
x
y
z
*/

typedef struct node
{
    char *name;
    char *number;
    struct node *next;
    //node *table[26]; - a table with 26 node pointers
} node;

/*
include <ctype.h>

int hash(char *word)
{
    return toupper(word[0])- 'A';
}
*/
