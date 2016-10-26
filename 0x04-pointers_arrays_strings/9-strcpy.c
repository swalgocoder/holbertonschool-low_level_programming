/**
 * *_strcpy - copy string pointed by "src" to buffer pointed to by "dest"
 * @dest: the pointer "dest"
 * @src: the pointer "src"
 * Return: the pointer to dest.
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
