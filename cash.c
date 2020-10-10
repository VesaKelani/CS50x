#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)
{
    //Ask user for a positive float
    float change;
    do
    {
        change = get_float("Change owed: ");
    }
    while (change < 0.00);
    //Convert money to cents and round to nearest integer
    int cents = round(change * 100);
    printf("%i cents\n", cents);

    // while loops nested in a do while loop to deduct
    // coins from total change until change left is 0
    int coins = 0;
    do
    {
        while (cents >= 25)
        {
            cents = cents - 25;
            coins = coins + 1;
            printf("coin amount rn is %i\n", coins);
            printf("cents amount rn is %i\n", cents);
        }

        while (cents >= 10)
        {
            cents = cents - 10;
            coins = coins + 1;
            printf("coin amount rn is %i\n", coins);
            printf("cents amount rn is %i\n", cents);
        }

        while (cents >= 5)
        {
            cents = cents - 5;
            coins = coins + 1;
            printf("coin amount rn is %i\n", coins);
            printf("cents amount rn is %i\n", cents);
        }

        while (cents >= 1)
        {
            cents = cents - 1;
            coins = coins + 1;
            printf("coin amount rn is %i\n", coins);
            printf("cents amount rn is %i\n", cents);
        }

    }
    while (cents > 0);
    printf("Coins: %i\n", coins);
}
