#include <stdio.h>
#include "holberton.h"
/**
 * jack_bauer - prints every minute of the day starting from
 * Return: 
 */

void jack_bauer(void)
{
  int t = 0;
  int a = 0, b = 0, c = 0, d = 0;

  while (t < 1440)
    {
      _putchar(a + '0');
      _putchar(b + '0');
      _putchar(':');
      _putchar(c + '0');
      _putchar(d + '0');
      _putchar('\n');

      d++;
      if (d > 9)
	{
	  d = 0;
	  c++;
	}
      if (c > 5)
	{
	  c = 0;
	  b++;
	}
      if (b > 9)
	{
	  b = 0;
	  a++;
	}
      t++;
    }
}
