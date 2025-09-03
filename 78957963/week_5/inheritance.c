#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>


// Each person has 2 parents
typedef struct person
{
    struct person *parents[2];
    char alleles[2];
 } person;

const int GENERATIONS = 3;
const int INDENT_LENGTH = 4;

person *create_family(int generations);
void print_family(person *p, int generation);
void free_family(person *p);
char random_allele();

int main(void)
{
    // Seed random number generator
    srand(time(0));

    // Create a new family with three generations
    person *p = create_family(GENERATIONS);

    // Print family tree of blood types
    print_family(p, 0);

    // Free memory
    free_family(p);
}

// Create a new individual with 'generations'
person *create_family(int generations)
{
    // TODO: Alocate memory for new person
    person *new_person = malloc(sizeof(person));
    if (new_person == NULL)
    {
        return NULL; // I can not return 1 as my create function returns a pointer not a number.
    }
    // If there are still generetions left to create
    if (generations > 1)
    {
        // Create two new parents for the current person by callening it recursivily
        person *parent0 = create_family(generations - 1);
        person *parent1 = create_family(generations - 1);

        // TODO: Set parrent pointers for the current person
        new_person->parents[0] = parent0;
        new_person->parents[1] = parent1;

        // TODO: Randomly assign current person's alleles based on ... of their parents
        new_person->alleles[0] = parent0->alleles[rand() % 2];
        new_person->alleles[1] = parent1->alleles[rand() % 2];
    }
    // If there are no generations left to create
    else
    {
        // TODO: Set parent pointers to NULL
        new_person->parents[0] = NULL;
        new_person->parents[1] = NULL;

        // TODO: Randomly assign alleles
        new_person->alleles[0] = random_allele();
        new_person->alleles[1] = random_allele();
    }

    // TODO: Return newly created person
    return new_person;
}

void print_family(person *p, int generation)
{
    if (p == NULL)
    {
        return;
    }

    // Indent by generation
    for (int i = 0; i < generation * INDENT_LENGTH; i++)
    {
        printf(" ");
    }

    // Print person
    if (generation == 0)
    {
        printf("Child (Generation %i): blood type %c%c\n", GENERATIONS - generation, p->alleles[0], p->alleles[1]);
    }
    else if (generation == 1)
    {
        printf("Parent (Generation %i): blood type %c%c\n", GENERATIONS - generation, p->alleles[0], p->alleles[1]);
    }
    else
    {
        printf("Grandparent (Generation %i): blood type %c%c\n", GENERATIONS - generation, p->alleles[0], p->alleles[1]);
    }

    // Recursively print parents
    print_family(p->parents[0], generation + 1);
    print_family(p->parents[1], generation + 1);
}
// Free 'p' and all ancestors of 'p'.
void free_family(person *p)
{
    // TODO: Handle base case
    if (p == NULL)
    {
        return;
    }

    // TODO: Free perents recursively
    free_family(p->parents[0]);
    free_family(p->parents[1]);

    // TODO: Free child
    free(p);

    // print each family member and their alleles
    printf("Freeing person with alleles %c%c\n", p->alleles[0], p->alleles[1]);

    free(p);
}


char random_allele()
{
    int r = rand() % 3;
    if (r == 0)
    {
        return 'A';
    }
    else if (r == 1)    void free_family(person *p)
    {
        if (p == NULL)
        {
            return;
        }

        free_family(p->parents[0]);
        free_family(p->parents[1]);

        // Optional: print before freeing (for debugging)
        // printf("Freeing person with alleles %c%c\n", p->alleles[0], p->alleles[1]);
        free(p);
    }
    {
        return 'B';
    }
    else
    {
        return 'O';
    }
}


