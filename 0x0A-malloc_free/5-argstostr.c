#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr - concats args of program, new line
 * @ac: number of arg
 * @av: value of arg
 * Return: pointer, or NULL
 */
char *argstostr(int ac, char **av)
{
	char *mystr, *swap;
	int count, count2;

	mystr = (char *)malloc(ac * sizeof(char *));
	swap = mystr;
	for (count = 0; count < ac; count++)
	{

		for (count2 = 0; av[count][count2] != '\0'; count2++)
		{
			*mystr = av[count][count2];
			mystr[count2]++;
		}
		*mystr = '\n';
		mystr[count]++;
	}
	if (swap)
		return (swap);
	else
		return (NULL);
}
