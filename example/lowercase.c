#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main (void)
{
    string s = get_string("Before: ");
    printf("After: ");
    for (int i = 0, len = strlen(s); i < len; i++)
    {
        if (s[i] >= 'A' && s[i] <= 'Z')
        {
            printf("%c", s[i] + 32);
        }
        else
        {
            printf("%c", s[i]);
        }
    }
    printf("\n");
}
