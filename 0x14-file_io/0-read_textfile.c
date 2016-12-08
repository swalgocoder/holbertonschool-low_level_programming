#include "holberton.h"
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
/**
 * open_file - open a file
 * @filename: pointer to filename
 * Return: 0 on failure
 */

int open_file(const char *filename)
{
	int fd;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	return (fd);
}

/**
 * read_textfile - read a text file & print  to stdout
 * @filename: pointer to filename to read
 * @letters: number of letters to output
 * Return: number of letters to print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t error, n;
	char *buffer = malloc(sizeof(char) * letters);

	if (buffer == NULL)
		return (0);

	if (filename == NULL)
		return (0);
	fd = open_file(filename);

	n = read(fd, buffer, letters);
	if (n == -1)
		return (0);
	if (n > 0)
		n = write(STDOUT_FILENO, buffer, n);
	if (n == -1)
		return (0);
	error = close(fd);
	if (error == -1)
		return (0);
	free(buffer);
	return (n);
}
