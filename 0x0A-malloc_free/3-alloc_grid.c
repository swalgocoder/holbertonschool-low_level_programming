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
	int **pgrid;
	int i, j;

	if (width < 1 || height < 1)
		return (NULL);

	pgrid = malloc(height * sizeof(void *));
	if (pgrid == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		*(pgrid + i) = malloc(width * sizeof(int));
		if (*(pgrid + i) == NULL)
		{
			for (i = i - 1; i >= 0; i--)
				free(*(pgrid + i));
			return (NULL);
		}
		for (j = 0; j < width; j++)
		{
			pgrid[i][j] = 0;
		}
	}
	return (pgrid);
}
