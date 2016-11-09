#include <stdlib.h>

/**
 * create_array -  array of chars initialized
 * @size: array size
 * @c: Char to initialize array
 * Return: Pointer to array
 */
char *create_array(unsigned int size, char c)
{


	char *my_array;

	unsigned int count;

	if (size != 0)
		my_array = malloc(size * sizeof(char));
	else
		return (NULL);

	if (my_array == NULL)
	return (NULL);
	for (count = 0; count < size; count++)
	{
	my_array[count] = c;
	}

return (my_array);
}
