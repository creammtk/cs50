#include <cs50.h>
#include <stdio.h>

int get_size(void);
int get_endsize(int end);

int main(void)
{
    // TODO: Prompt for start size
    int n = get_size();

    // TODO: Prompt for end size
    int m = get_endsize(n);

    // TODO: Calculate number of years until we reach threshold
    int years;
    for (years = 0; n < m; years++)
    {
        n = n + (n / 3) - (n / 4);
    }

    // TODO: Print number of years
    printf("Years: %i\n", years);
}

int get_size(void)
{
    int n;
    do
    {
        n = get_int("Start size: ");
    }
    while (n < 9);
    return n;
}
int get_endsize(int end)
{
    int m;
    do
    {
        m = get_int("End size: ");
    }
    while (m < end);
    return m;
}
