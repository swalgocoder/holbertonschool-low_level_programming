/**
 * _strlen_recursion - returns the length of a string
 * @s: the string to find length of
 * Return: string length value
 */
int _strlen_recursion(char *s)
{

	if (*s == '\0')
	{
		return (0);
	}
	return (1 + _strlen_recursion(++s));
}
