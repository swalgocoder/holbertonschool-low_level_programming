#include "holberton.h"
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include "holberton.h"
/**
 * read_textfile -  use _putchar to print char array 
 * @filename: pointer to char array or file name
 * @size_t: letter: the actual number of letters
 * Return: the actual number of letters it could read and print
 * if the file can not be opened or read, return 0
 * if filename is NULL return 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
  char *buffer;
  int file_opn, error;
  ssize_t file_in, file_out;


  buffer = malloc(sizeof(char) * letters);

  if (buffer == NULL)
    return (0);
    
  if (filename == NULL)
    return (0);

  file_opn = open(filename, O_RDONLY);

if (file_opn == -1)
    return (0);

	file_in = read(file_opn, buffer, letters);
	if (file_in == -1)
	{
	free(buffer);
	return (0);
	}
	file_out = write(1, buffer, file_in);
	if (file_out == -1)
	{
	free(buffer);
	return (0);
	}

	error = close(file_opn);

	if (error == -1)
	{
	free(buffer);
	return (0);
	}
	free(buffer);
	return (file_out);
}
