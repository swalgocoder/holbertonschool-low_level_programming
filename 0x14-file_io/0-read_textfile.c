#include "holberton.h"
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
/**
 * read_textfile -  use _putchar to print char array
 * @filename: pointer to char array or file name
 * @letters: the actual number of letters
 * Return: the actual number of letters it could read and print
 * if the file can not be opened or read, return 0
 * if filename is NULL return 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer = malloc(sizeof(char) * letters);
	int file_opn;
	ssize_t file_in_cnt, i, error;

	if (filename == NULL)
	return (0);
	
	file_opn = open(filename, O_RDONLY);
	if (file_opn == -1)
	return (0);

	file_in_cnt = read(file_opn, buffer, letters);
	if (file_in_cnt == -1)
	{
	free(buffer);
	return (0);
	}

	for (i = 0; i < file_in_cnt; i++)
	_putchar(buffer[i]);

	error = close(file_opn);
	if (error == -1)
	{
	free(buffer);
	return (0);
	}
	
	free(buffer);
	return (i);
}
