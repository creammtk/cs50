#include <cs50.h>
#include <stdio.h>
#include <string.h>

int get_numbers(void);

int main(void)
{
    long x = 4003600000000114;
    int rest = (x % 1000 - x % 100) / 100;
    printf("%i\n", rest);
    //TODO: prompt for input
    int numbers = get_numbers();
    //TODO: calculate checksum

    //TODO: check for card length and starting digits

    //TODO: print AMEX, MASTERCARD, VISA or INVALID

}

int get_numbers(void)
{
    int numbers;
    numbers = get_long("Number: ");
    return numbers;
}

void checksum(long numbers)
{
    
}