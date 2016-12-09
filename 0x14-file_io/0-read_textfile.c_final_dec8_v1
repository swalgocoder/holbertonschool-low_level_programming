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
	int incnt = 0, outcnt = 0;
	char *buf = malloc(sizeof(char) * letters);

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	if (buf == NULL)
		return (0);
	while ((incnt = read(fd, buf, letters)) > 0 && (size_t)outcnt < letters)
	{
		i = write(STDOUT_FILENO, buf, (ssize_t)incnt);
		if (i == -1)
		{
			close(fd);
			free(buf);
			return (0);
		}
		outcnt += i;
	}
	error = close(fd);
	if (incnt == -1)
		return (0);
	if (error == -1)
		return (0);
	free(buf);
	return (outcnt);
}
