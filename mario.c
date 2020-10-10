#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int n;
    do
    {
        // get positive integer only
        n = get_int("Height: ");
    }
    while (n > 8 || n < 1);

    //iterates through every row and coloumn and prints #
    //only if the sum is n - 1 where n is the
    //height input from the user
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {

            if (i + j >= n - 1)
            {
                printf("#");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }

}
