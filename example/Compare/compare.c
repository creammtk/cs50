#include <cs50.h>
#include <stdio.h>

int main(void)
{
  int x = get_int("What's x? ");
  int y = get_int("what's y? ");

  if (x > y)
  {
    printf("%i is greter than %i\n",x,y);
  }
  else if (x < y)
  {
    printf("x is less than y\n");
  }
  else
  {
    printf("x is equal to y\n");
  }
}