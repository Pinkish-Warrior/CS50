#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

/*
Exercise:
Create a program, list.c, where you:

1. Implement code to add a node to the linked list. Ensure that the list always points to the head of the linked list. Also ensure your new node contains a phrase.
2. Implement unload such that all nodes in the linked list are free'd when the function is called. Return true when successfull.

*/


type struct node
{
    string phrase;
    struct node *next
} node;


 bool unload(node *list)
{
    node *ptr = list;

    while (ptr != NULL)
    {
        ptr = list->next;
        pree(list);
        list = ptr;
    }
    return false;
}


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

// Define the structure for each node
typedef struct node
{
    char phrase[100];       // space for a phrase (up to 99 chars + null terminator)
    struct node *next;      // pointer to the next node
} node;

// Head pointer for the linked list (starts empty)
node *head = NULL;

// Function to add a node at the beginning of the list
bool add_node(const char *text)
{
    // Allocate memory for a new node
    node *new_node = malloc(sizeof(node));
    if (new_node == NULL)
    {
        return false; // malloc failed
    }

    // Copy the phrase into the node
    strncpy(new_node->phrase, text, sizeof(new_node->phrase) - 1);
    new_node->phrase[sizeof(new_node->phrase) - 1] = '\0'; // ensure null-terminated

    // New node points to the old head
    new_node->next = head;

    // Update head to point to the new node
    head = new_node;

    return true;
}

// Function to free all nodes
bool unload(void)
{
    node *cursor = head;
    while (cursor != NULL)
    {
        // Remember the next node before freeing
        node *temp = cursor->next;
        free(cursor);
        cursor = temp;
    }

    // After freeing, reset head to NULL
    head = NULL;
    return true;
}

// Function to print all phrases in the list
void print_list(void)
{
    node *cursor = head;
    while (cursor != NULL)
    {
        printf("%s\n", cursor->phrase);
        cursor = cursor->next;
    }
}

// Example main function to test
int main(void)
{
    add_node("Hello, World!");
    add_node("This is a linked list.");
    add_node("Each node has a phrase.");

    printf("Current list:\n");
    print_list();

    if (unload())
    {
        printf("All nodes successfully freed.\n");
    }
    else
    {
        printf("Failed to free nodes.\n");
    }

    return 0;
}
