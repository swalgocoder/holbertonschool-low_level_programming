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
	int **grid, i, j;

	if (width < 0 || height < 0)
		return (NULL);
	grid = malloc(height * sizeof(int *));
	if (grid == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(width * sizeof(int *));
		if (grid[i] == NULL)
		{
			i--;
			while (i >= 0)
			{
				free(grid[i]);
				i--;
			}
			free(grid);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
			grid[i][j] = 0;
	return (grid);
}
