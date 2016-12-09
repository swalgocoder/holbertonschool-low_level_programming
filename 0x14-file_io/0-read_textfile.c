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
	ssize_t cls_msg, out_msg, iocount;
	char *buf = malloc(sizeof(*buf) * letters);

	if (buf == NULL)
		return (0);

	if (filename == NULL)
		return (0);

	fd = open_file(filename);

	if (fd == -1)
		return (0);

	iocount = read(fd, buf, letters);
	if (iocount == -1)
		return (0);

	if (iocount > 0)
		out_msg = write(STDOUT_FILENO, buf, iocount);

	if (out_msg == -1 || out_msg != iocount)
		return (0);

	cls_msg = close(fd);
	if (cls_msg == -1)
		return (0);
	free(buf);
	return (out_msg);
}
