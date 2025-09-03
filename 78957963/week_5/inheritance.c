# include<cs50.h>
# include<stdio.h>
# include<string.h>


int main(void)
{
    free_family(p);
}

// Create a new individual with 'generations'
person *create_family(int generations)
{
    // TODO: Alocate memory for new person
    person *new_person - malloc(sizeof(person));
    if (new_person == NULL)
    {
        return NULL; // I can not return 1 as my create function returns a pointer not a number.
    }
    // If there are still generetions left to create
    if(generations > 1)
    {
        // Create two new parents for the current person by callening it recursivily
        person *parent0 = create_family(generations - 1);
        person *parent1 = create_family(generations - 1);

        // TODO: Set parrent pointers for the current person
        new_person->perents[0] = parent0;
        new_person->perents[1] = parent1;

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

    // Free 'p' and all ancestors of 'p'.
    void free_family(person *p)
    {
        // TODO: Handle base case


        // TODO: Free perents recursively


        // TODO: Free child
    }

    // print each family member and their alleles
}

char randon_allele()
{
    int r = rand() % 3;
    if (r == 0)
    {
        return 'A';
    }
    else if (r == 1)
    {
        return 'B';
    }
    else
    {
        return 'O'
    }
}
