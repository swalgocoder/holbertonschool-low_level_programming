#include <stdlib.h>

/**
 * alloc_grid -  a 2 dimensional array
 * @width: Width of grid, columns
 * @height: Height of grid, rows
 *
 * Return: Pointer to  array, NULL if it fails
 */
	int **alloc_grid(int width, int height)
	{
	int **mygrid;
	int count, count2;


	mygrid = malloc(height * sizeof(int *));
	if (mygrid == NULL)
		return (NULL);
	for (count = 0; count < height; count++)
	{
		mygrid[count] = malloc(width * sizeof(int));
		if (mygrid[count] == NULL)
			return (NULL);

		for (count2 = 0; count2 < width; count2++)
		{
			mygrid[count][count2] = 0;
		}

	}
	return (mygrid);
	}
