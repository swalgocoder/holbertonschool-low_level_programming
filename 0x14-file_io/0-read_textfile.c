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
	int file_handle, i, error;
	int file_in_cnt = 0, file_out_cnt = 0;
	char *buffer = malloc(sizeof(char) * letters);

	if (filename == NULL)
		return (0);
	file_handle = open(filename, O_RDONLY);
	if (file_handle == -1)
		return (0);

	if (buffer == NULL)
		return (0);
	file_in_cnt = read(file_handle, buffer, letters);
	while (file_in_cnt > 0 && (size_t)file_out_cnt < letters)
	{
		i = write(STDOUT_FILENO, buffer, (ssize_t)file_in_cnt);
		if (i == -1)
		{
			close(file_handle);
			free(buffer);
			return (0);
		}
		file_out_cnt += i;
	}
	error = close(file_handle);
	if (file_in_cnt == -1)
		return (0);
	if (error == -1)
		return (0);
	free(buffer);
	return (file_out_cnt);
}
