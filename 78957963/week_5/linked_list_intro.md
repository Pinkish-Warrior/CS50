# pointer to the  single linked list

node *list = NULL; (invalid list)

node *n = malloc(sizeof(node));

n ->phrase = "Hi!";

n -> next = NULL;

n = malloc(sizeof(node));

n->phrase = "Hey!";

        list            n

     |_"Hey"_|       |_"Hi"_|
     |_ NULL_|       |_NULL_|

list = n;

Deleting nodes

free(list); it does not delete the n list, the memory would be lost, therefore we need to free the n too.

node *ptr = list->next;

ptr = list->next;

Exercise:
Create a program, list.c, where you:

1. Implement code to add a node to the linked list. Ensure that the list always points to the head of the linked list. Also ensure  you new node contains a phrase.
2. Implement unload such thta all nodes inthe linked list are free'd when the function is called. Return true when successfull.

## pointer to the double linked list
