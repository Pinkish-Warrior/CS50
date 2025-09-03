# include<cs50.h>
# include<stdio.h>
# include<string.h>


int main(void)
{

}


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
    }
}
