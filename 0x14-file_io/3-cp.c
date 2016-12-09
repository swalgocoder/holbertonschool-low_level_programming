#include "holberton.h"
/**
 * error_check - file i/o error check
 * @argc: argument count
 * @file1: file to copy from
 * @file2: file to copy to
 * Return: void
 */

void error_check(int argc, char *file1, char *file2)
{
	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
	if (file1 == NULL)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file1), exit(98);
	if (file2 == NULL)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file2), exit(99);

}
/**
 * main - append the content of one file to another
 * @argc: argument count
 * @argv: argument array
 *
 * Return: 0
 */

int main(int argc, char **argv)
{
	int fdr, fdw, err, bytes;
	char buf[BUFFERSIZE];
	mode_t mode = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;

	error_check(argc, argv[1], argv[2]);
	fdr = open(argv[1], O_RDONLY);
	if (fdr == -1)
		dprintf(STDERR_FILENO, "Error:Can't read from file %s\n", argv[1]), exit(98);
	fdw = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, mode);
	if (fdw == -1)
		dprintf(STDERR_FILENO, "Can't write to %s\n", argv[2]), exit(99);
	err = bytes = 1;
	while (bytes)
	{
		bytes = read(fdr, buf, BUFFERSIZE);
		if (bytes == -1)
			dprintf(STDERR_FILENO, "Can't read from file %s\n", argv[1]), exit(98);
		if (bytes > 0)
		{
			err = write(fdw, buf, bytes);
			if (err == -1)
				dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
		}
	}
	err = close(fdr);
	if (err == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fdr), exit(100);
	err = close(fdw);
	if (err == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fdw), exit(100);
	return (0);
}
