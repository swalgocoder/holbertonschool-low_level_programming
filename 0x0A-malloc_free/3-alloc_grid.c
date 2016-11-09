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
	int count, count2;
	int **my_grid;

	count = count2 = 0;
	my_grid = (int **)malloc(height * sizeof(my_grid));
	if (my_grid == NULL)
		return (NULL);

	for (count = 0; count < height; count++)
	{
		my_grid[count] = malloc(width * sizeof(int *));
		if (my_gid[count] == NULL)
		{
			for (count2 = 0; count2 < count; count2++)
				free(my_grid[count2]);
			free(my_grid);
			return (NULL);
		}
		for (count2 = 0; count2 < width; count2++)
			my_grid[count][cout2] = 0;
	}
	return (my_grid);
}
