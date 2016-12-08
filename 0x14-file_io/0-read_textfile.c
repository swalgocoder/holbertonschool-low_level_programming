#include "holberton.h"
#include <unistd.h>
#include <stdio.h>
#include <sys/stat.h>
#include <fcntl.h>

/**
 * read_textfile - reads a text file
 * @filename: file to read
 * @letters: number of letters it should read
 * Return: actual numbers it could read
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fp, count, i;
	char *buff;

	if (filename == NULL)
		return (0);
	/* malloc buffer */
	buff = malloc(sizeof(char) * letters);
	if (buff == NULL)
		return (0);
	/* open the file and check if fails */
	fp = open(filename, O_RDWR);
	if (fp == -1)
		return (0);
	/* read files and check if fails */
	count = read(fp, buff, letters);
	if (count == -1)
		return (0);
	for (i = 0; i < count; i++)
	{
		_putchar(buff[i]);
	}
	close(fp);
	free(buff);
	return (i);
}
