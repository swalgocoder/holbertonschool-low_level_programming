#include "holberton.h"
/**
 * _atoi - converts string (ascci) to an integer
  * @s: the input
 * Return: the converted integer
 */
int _atoi(char *s)
{
	int n, sign, result_int;

	sign = 1;
	result_int = 0;
	for (n = 0; *(s + n) != '\0'; n++)
	{
		if (*(s + n) == '-')
		{
			sign *= -1;
		}
		if (*(s + n) >= '0' && *(s + n) <= '9')
		{
			result_int = 10 * result_int - (*(s + n) - '0');
		}
		if (result_int < 0 && (*(s + n) < '0' || *(s + n) > '9'))
		{
			break;
		}
	}
	if (sign > 0)
	{
		result_int *= -1;
	}
	return (result_int);
}
