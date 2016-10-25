#include <stdio.h>
#include <string.h>

/**
 * print_rev - prints a string, in reverse, followed by a new line.
 * @s: first parameter
 * Return: reversed
 */

void test_string(char *s)
{

	char str[100];
	int i;

	i = 0;

	while (*s != 0)
	{
	str[i] = *s;
	printf("the array str element position: %d", i);
	putchar(str[i]);
	putchar('\n');

	s++;
	i++;

	}

}


int main(void)
{
	char s[10] = "Holberton";
	
	printf("%s\n", s);
	test_string(s);
	
	printf("\n");

	return (0);
}
