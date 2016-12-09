#include "holberton.h"
#include "holberton.h"
/**
 * open_file - open file
 * @filename: pointer to file
 * Return: int
 */
int open_file(const char *filename)
{
	int fd;

	fd = open(filename, O_RDONLY);
	return (fd);
}
/**
 * read_textfile - reads file,prints to POSIX stdout.
 *
 * @filename: filename
 * @letters: number of letters to read and print.
 * Return: returns the number of letters readed.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t err, n;
	char *buf;

	buf = malloc(sizeof(*buf) * letters);
	if (buf == NULL)
		return (0);

	if (filename == NULL)
		return (0);
	fd = open_file(filename);
	if (fd == -1)
	{
		free(buf);
		return (0);
	}

	n = read(fd, buf, letters);
	if (n == -1)
	{
		free(buf);
		return (0);
	}
	if (n > 0)
		err = write(STDOUT_FILENO, buf, n);
	if (err < n)
	{
		free(buf);
		return (0);
	}
	err = close(fd);
	if (err == -1)
	{
		free(buf);
		return (0);
	}
	free(buf);
	return (n);
}
