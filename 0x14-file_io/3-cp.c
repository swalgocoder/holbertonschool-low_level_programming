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
	int f_2read, f_2write, err, bytes;
	char buffer[BUFFERSIZE];
	mode_t mode = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;

	error_check(argc, argv[1], argv[2]);
	f_2read = open(argv[1], O_RDONLY);
	if (f_2read == -1)
		dprintf(STDERR_FILENO, "Error:Can't read from file %s\n", argv[1]), exit(98);
	f_2write = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, mode);
	if (f_2write == -1)
		dprintf(STDERR_FILENO, "Can't write to %s\n", argv[2]), exit(99);
	err = bytes = 1;
	while (bytes)
	{
		bytes = read(f_2read, buffer, BUFFERSIZE);
		if (bytes == -1)
			dprintf(STDERR_FILENO, "Can't read from file %s\n", argv[1]), exit(98);
		if (bytes > 0)
		{
			err = write(f_2write, buffer, bytes);
			if (err == -1)
				dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
		}
	}
	err = close(f_2read);
	if (err == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", f_2read), exit(100);
	err = close(f_2write);
	if (err == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", f_2write), exit(100);
	return (0);
}
