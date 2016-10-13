#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - evaluates and prints  a random number in certain ranges
 * 3 ranges 
 * Return: 0
 */

int main(void)
{
  int n;
  int lastDigit;

  srand(time(0));
  n = rand() - RAND_MAX / 2;
  /* your code goes there */
  /* get last digit of num */

  lastDigit = n%10;

  if ( lastDigit > 5)
    {
      printf("Last digit of %d is %d and is greater than 5\n", n, lastDigit);
    }
  else if ( lastDigit == 0)
    {
      printf("Last digit of %d is %d and is 0\n", n, lastDigit);
    }
  else
    {
      printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lastDigit);
    }
  return (0);
}
