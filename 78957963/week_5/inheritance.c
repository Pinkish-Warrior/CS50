# include<cs50.h>
# include<stdio.h>
# include<string.h>


int main(void)
{

}


person *create_family(int generations)
{
    // TODO: Alocate memory for new person

    // If there are still generetions left to create
    if(generations > 1)
    {
        // Create two new parents for the current person by callening it recursivily
        person *parent) = create_family(generations -1)
    }
}
