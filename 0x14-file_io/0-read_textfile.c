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
	ssize_t io_msg, iocount;
	char *buf = malloc(sizeof(*buf) * letters);

	if (buf == NULL)
		free(buf); return (0);

	if (filename == NULL)
		free(buf); return (0);

	fd = open_file(filename);

	if (fd == -1)
		free(buf); return (0);

	iocount = read(fd, buf, letters);
	if (iocount == -1)
	{
		free(buf);
		return (0);
	}
	if (iocount > 0)
		io_msg = write(STDOUT_FILENO, buf, iocount);

	if (io_msg < iocount)
	{
		free(buf);
		return (0);
	}
	io_msg = close(fd);
	if (io_msg == -1)
	{
		free(buf);
		return (0);
	}
	free(buf);
	return (iocount);
}
