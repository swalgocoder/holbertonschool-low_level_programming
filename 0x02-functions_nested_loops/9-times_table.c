#include "holberton.h"
/**
 *times_table - Print the 9 times table, starting with 0
 *Return: none
 */

	void times_table(void)
	{
	int x; /* column array */
	int y; /* row array */
	int z; /* value of x*y */

		for (x = 0; x <= 9; x++)
		{
			for (y = 0; y <= 9; y++)
			{
				z = x * y;
				if (y == 0)
				{
				_putchar(z + '0');
				}
				if (z < 10)
				{
				_putchar(' ');
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

				_putchar(',');
				_putchar(' ');
			}	 
		}
	}
