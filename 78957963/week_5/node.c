

// typedef struct
// {
//     char* name;
//     char* number;
// } person;


typedef struct node
{
    int number;          // this is the "cargo" box
    struct node *next;   // this is the "connector" to the next train block
} node;

