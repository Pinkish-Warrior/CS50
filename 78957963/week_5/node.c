

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

Step by step:
struct node { ... };
This is like a blueprint for making a train block. Every block will have two parts inside it.
int number;
This is the cargo inside the block. It stores a number (like 5, 42, or 100).
struct node *next;
This is the connector piece that lets this block hook onto the next block. It doesn’t hold a number itself, but instead points to where the next block is sitting.
typedef ... node;
This is just giving the block a short nickname. Instead of saying struct node every time, you can now just say node.
