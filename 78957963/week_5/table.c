#include<cs50.g>
#include<stdio.h>
#include<stdib.h>
#include<string.h>

typedef struct node
{
    string phrase;
    struct node *next;
} node;

node *table[26];

int hash(string phrase);
bool unload(node *list);
