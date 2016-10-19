#include "holberton.h"
/**
 *times_table - Print the 9 times table, starting with 0
 *Return: none
 */

	void times_table(void)
	{
	int x = 0;
	int y;
	int z;

		while  (x <= 9)
		{
		y = 0;
			while  (y <= 9)
			{
			z = x * y;

				if (z < 10)
				{
					if (y > 0)
					{
					_putchar(' ');
					}
				_putchar(z + '0');
				}

				if (z >= 10)
				{
				_putchar(z / 10 + '0');
				_putchar(z % 10 + '0');
				}

				if (y == 9)
				{
				_putchar('\n');
				}

				else
				{
				_putchar(',');
				_putchar(' ');
			}
			y++;
		}
		x++;
		}
	}
