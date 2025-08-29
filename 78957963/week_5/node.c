

// typedef struct
// {
//     char* name;
//     char* number;
// } person;


typedef struct node
{
    int number;          // this is the "cargo" box
    struct node *next;   // this is the "connector" to the next train block
} node; // nickname

/* Step by step:
✅ struct node { ... };
This is like a blueprint for making a train block. Every block will have two parts inside it.

✅ int number;
This is the cargo inside the block. It stores a number (like 5, 42, or 100 or chars depending on the type).
Or even more flexibly, we could make it carry any type we want:
float value; → for decimal numbers (e.g., 3.14)
char word[50]; → for words/strings up to 49 letters
void *data; → super flexible, can point to any kind of data

✅ struct node *next;
This is the connector piece that lets this block hook onto the next block. It doesn’t hold a "value" itself, but instead points to where the next block is sitting.

✅ typedef ... node;
This is just giving the block a short nickname. Instead of saying struct node every time, you can now just say node.


typedef struct node
{
    int number;          // this is the "cargo" box
    struct node *left;   // this is the "connector" to the next train block on the left
    struct node *right   // this is the "connector" to the next train block in the right
} node; // nickname
This new structure gives us a superpower of a binary search.
/*


/* Step by step:
✅ struct node { ... };
This is like a blueprint for making a train block. Every block will have two parts inside it.

✅ int number;
This is the cargo inside the block. It stores a number (like 5, 42, or 100 or chars depending on the type).
Or even more flexibly, we could make it carry any type we want:
float value; → for decimal numbers (e.g., 3.14)
char word[50]; → for words/strings up to 49 letters
void *data; → super flexible, can point to any kind of data

✅ struct node *next;
This is the connector piece that lets this block hook onto the next block. It doesn’t hold a "value" itself, but instead points to where the next block is sitting.

✅ typedef ... node;
This is just giving the block a short nickname. Instead of saying struct node every time, you can now just say node.


typedef struct node
{
    int number;          // this is the "cargo" box
    struct node *left;   // this is the "connector" to the next train block on the left
    struct node *right   // this is the "connector" to the next train block in the right
} node; // nickname
This new structure gives us a superpower of a binary search.
*/

bool search(node *tree, int number)
{
    if (tree == NULL)
    {
        return false;
    } else if (number < tree->number)
    {
        return search( tree->left, number)
    }
}

