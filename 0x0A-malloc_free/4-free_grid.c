#include <stdlib.h>

/**
 * free_grid - free the array
 * @grid: array to free
 * @height: array height # of rows
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int count;

	for (count = 0; count < height; count++)
	{
		free(grid[count]);
	}
	free(grid);
}
