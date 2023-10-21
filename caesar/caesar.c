#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

bool only_digits(string s);
char rotate(char c, int n);

int main(int argc, string argv[])
{
    string k = argv[1];
    if (argc != 2)
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }
    bool check = only_digits(k);
    if (check == false)
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }
    int key = atoi(k);
    string plain = get_string("plaintext: ");
    printf("ciphertext: ");
    char newplain;
    for (int i = 0, len = strlen(plain); i < len; i++)
    {
        newplain = plain[i];
        char cipher = rotate(newplain, key);
        printf("%c", cipher);
    }
    printf("\n");
}

bool only_digits(string s)
{
    for (int i = 0, len = strlen(s); i < len; i++)
    {
        char c = s[i];
        if (isdigit(c) == 0)
        {
            printf("Usage: ./caesar key\n");
            return false;
        }
    }
    return true;
}

char rotate(char c, int n)
{
    if (isupper(c))
    {
        char upper = ((c - 65) + n) % 26;
        upper += 65;
        return upper;
    }
    if (islower(c))
    {
        char lower = ((c - 97) + n) % 26;
        lower += 97;
        return lower;
    }
    return c;
}