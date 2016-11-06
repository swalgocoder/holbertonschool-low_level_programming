#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - the minimum amount of coins 4 change
 * @argc: # of arguement
 * @argv: value of argument
 * Return: 0
 */

int main(int argc, char **argv)
{
int sum, q, d, n, 2p, 1p, count;
  
q = 25;
d = 10;
n = 5;
2p = 2;
1p = 1;
  
count = 0;

while (argc != 2)
	{
	printf("Error\n");
	return (1);
	}

sum = atoi(argv[1]);

while (sum < 0)
{
	printf("%d\n", 0);
	return (0);
}

while (sum > 0)
{
  if (sum % q > = 0)
	{
		count += sum / q;
		sum = sum % q;
	}
	if (sum % d >=0)
	{
		count += sum / 10;
		sum = sum % 10;
	}
	if (sum % n >= 0)
	{
		count += sum / n;
		sum = sum % n;
	}
	if (sum % 2p >= 0)
	{
		count += sum / 2p;
		sum = sum % 2p;
	}
	if (sum % 1p >= 0)
	{
		count += sum / 1p;
    sum = sum % 1p;
	}
	printf("%d\n", count);
	return (0);
}

}
