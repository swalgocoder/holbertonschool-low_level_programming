#include <stdlib.h>

/**
 * alloc_grid -  dynamically allocate mem for 2D array
 * @width: Width of grid, columns
 * @height: Height of grid, rows
 *
 * Return: Pointer to  array, NULL if it fails
 */

int **alloc_grid(int width, int height)
{
	int **a, i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	a = malloc(height * sizeof(*a));
	if (a == NULL)
		return (NULL);

	i = 0;
	while (i < height)
	{
		a[i] = malloc(width * sizeof(**a));
		if (a[i] == NULL)
		{
			while (--i >= 0)
				free(a[i]);
			free(a);
			return (NULL);
		}
		i++;
	}
	i = 0;
	while (i < height)
	{
		j = 0;
		while (j < width)
		{
			a[i][j] = 0;
			j++;
		}
		i++;
	}

	return (a);
}
