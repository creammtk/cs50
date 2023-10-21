#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int h;
    do
    {
        h = get_int("Height: ");
    }
    while (h > 8 || h <= 0);
    for (int i = h - 1; i >= 0; i--)
    {
        for (int j = 0; j < i; j++)
        {
            printf(" ");
        }
        for (int k = 0; k < (h - i); k++)
        {
            printf("#");
        }
        printf("  ");
        for (int k = 0; k < (h - i); k++)
        {
            printf("#");
        }
        printf("\n");
    }
}
// *--- row 0 * 1 - 3
// **--
// ***-
// ****
