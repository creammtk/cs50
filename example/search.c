#include <cs50.h>
#include <stdio.h>

//linear search

int main(void)
{
    int numbers[] = {20, 500, 10, 5, 100, 1, 50};
    //an array whatever size this is containing those numbers left to right
    int n = get_int("Number: ");
    for(int i = 0; i < 7; i++)
    {
        if(numbers[i] == n)
        {
            printf("Found\n");
            return 0;
        }
    }
    printf("Not found\n");
    return 1;

}