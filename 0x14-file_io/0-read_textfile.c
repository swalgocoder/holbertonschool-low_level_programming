#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include "holberton.h"

/**
 * read_textfile - read & write textfile
 * @filename: pointer to file
 * @letters: num of characters to write
 * Return: num of characters written out
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, i, error;
	int in_c = 0, out_c = 0;
	char *buffer = malloc(sizeof(char) * letters);

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	if (buffer == NULL)
		return (0);

	while ((in_c = read(fd, buffer, letters)) > 0 && (size_t)out_c < letters)
	{
	i = write(STDOUT_FILENO, buffer, (ssize_t)in_c);
		if (i == -1)
		{
			close(fd);
			free(buffer);
			return (0);
		}
		out_c += i;
	}
	error = close(fd);
	if (in_c == -1)
		return (0);
	if (error == -1)
		return (0);
	free(buffer);
	return (out_c);
}
