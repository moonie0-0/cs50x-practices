#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Prompt the user for change owed, in cents
    int cents;
    do{
        cents= get_int("Change owed:");
    }
    while(cents<0);
    // Calculate how many quarters you should give customer
   int quaters = cents/25;
    // Subtract the value of those quarters from cents
    cents = cents % 25;

        // Calculate how many dimes you should give customer
    int dimes = cents/10;
        // Subtract the value of those dimes from remaining cents
    cents = cents % 10;

        // Calculate how many nickels you should give customer
    int nickle = cents/5;
        // Subtract the value of those nickels from remaining cents
    cents = cents % 5;

    // Calculate how many pennies you should give customer
    int pennies = cents/1;
        // Subtract the value of those pennies from remaining cents
    cents = cents % 1;

// Sum the number of quarters, dimes, nickels, and pennies used
    int sum = quaters + dimes + nickle + pennies;
    // Print that sum
    printf(" %i\n" ,sum);
}

