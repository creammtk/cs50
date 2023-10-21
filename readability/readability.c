#include <cs50.h>
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <string.h>

int count_letters(string text);
int count_words(string text);
int count_sentences(string text);

int main(void)
{
    string text = get_string("Text: ");
    int letter = count_letters(text);
    int word = count_words(text);
    int sentence = count_sentences(text);
    float L = letter / (float) word * 100;
    float S = sentence / (float) word * 100;
    // printf("letter= %i\n", letter);
    // printf("word= %i\n", word);
    // printf("sentence= %i\n", sentence);
    // printf("L= %f\n", L);
    // printf("S= %f\n", S);

    float index = 0.0588 * L - 0.296 * S - 15.8;
    // printf("index= %f\n", index);

    if (round(index) >= 16)
    {
        printf("Grade 16+\n");
    }
    else if (round(index) < 1)
    {
        printf("Before Grade 1\n");
    }
    else
    {
        printf("Grade %i\n", (int) round(index));
    }
}
int count_letters(string text)
{
    int count = 0;
    for (int i = 0, len = strlen(text); i < len; i++)
    {
        if (!isspace(text[i]) && !ispunct(text[i]))
        {
            count++;
        }
    }
    return count;
}
int count_words(string text)
{
    int count = 0;
    for (int i = 0, len = strlen(text); i < len; i++)
    {
        if (len == 0)
            return 0;
        if (isspace(text[i]))
        {
            count++;
        }
    }
    return count + 1;
}
int count_sentences(string text)
{
    int count = 0;
    for (int i = 0, len = strlen(text); i < len; i++)
    {
        if (text[i] == '.' || text[i] == '!' || text[i] == '?')
        {
            count++;
        }
    }
    return count;
}