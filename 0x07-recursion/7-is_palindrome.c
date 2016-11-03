#include "holberton.h"
/**
 *  _strlen_recursion - length of string
 *
 * @s: pointer,start of string
 * Return: length
 */

int _strlen_recursion(char *s)
{
	if (*s)
		return (_strlen_recursion(s + 1) + 1);
	return (0);
}
/**
 * check_pal - recursively checks for palindrome
 *
 * @str: start of string
 * @len_s: length of str
 * Return: 1 if pal, 0 otherwise
 */
int check_pal(char *str, int len_s)
{
	if (len_s <= 1)
		return (1);
	else if (str[0] != str[len_s - 1])
		return (0);
	else
		return (check_pal((str + 1), (len_s - 2)));
}
/**
 * is_palindrome - recursively checks for palindrome
 *
 * @s: pointer to beginning of string, potential palindrome
 * Return: 1 if pal, 0 otherwise
 */

int is_palindrome(char *s)
{
	int len_str;

	len_str = _strlen_recursion(s);
	if (len_str <= 1)
		return (1);
	return (check_pal(s, len_str));
}
