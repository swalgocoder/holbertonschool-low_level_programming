#include "holberton.h"

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
	ssize_t cls_msg, iocount;
	char *buf = malloc(sizeof(*buf) * letters);

	if (buf == NULL)
		free(buf); return (0);

	if (filename == NULL)
		free(buf); return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		free(buf); return (0);

	iocount = read(fd, buf, letters);
	if (iocount == -1)
		free(buf); return (0);

	if (iocount > 0)
		iocount = write(STDOUT_FILENO, buf, iocount);

	if (iocount == -1)
		free(buf); return (0);

	cls_msg = close(fd);
	if (cls_msg == -1)
	{
		free(buf); return (0);
	}
	free(buf); return (iocount);
}
