#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Prompt for pyramid height between 1 and 8 
    int height;
    do
    {
        height = get_int("Height: ");
    }
    while (height < 1 || height > 8);
   
    // Building and right-aligning the hashtags 
    for (int i = 1; i <= height; i++)
    {
        
        // Prints the spaces (right-aligns the hashtags)
        for (int k = height; k > i; k--)
        {
            printf(" ");
        }
        
        // Prints the hashtags
        for (int j = 0; j < i; j++)
        {
            printf("#");
        }
        printf("\n");
    }
}
