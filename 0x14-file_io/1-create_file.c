#include "holberton.h"
#include "holberton.h"
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include "holberton.h"
/**
 * create_file - create a file
 * @filename: pointer to file
 * @text_content: content of file
 *
 * Return: 1 upon success; -1 upon failure
 */
int create_file(const char *filename, char *text_content)
{
	int file_handle, i;

	if (filename == NULL)
		return (-1);
	if ((file_handle = open(filename, O_CREAT | O_RDWR, S_IRUSR | S_IWUSR)) == -1)
	{
		close(file_handle);
		return (-1);
	}
	if (text_content != NULL)
	{
		for (i = 0; text_content[i] != 0; i++)
			;
		write(file_handle, text_content, i);
	}
	close(file_handle);
	return (1);
}
