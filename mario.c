#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int n;
    do{
        n = get_int("Height: ");
    }
    while(n < 1);

    for(int i = 1; i <= n; i++)
    {
        // Print spaces
        for(int j = 0; j < n - i; j++)
        {
            printf(" ");
        }
        // Print hashes
        for(int k = 0; k < i; k++)
        {
            printf("#");
        }
        printf("\n");
    }
}
