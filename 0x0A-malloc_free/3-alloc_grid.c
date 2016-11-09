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
	int **mygrid;
	int count, count2;

        if (width <= 0 || height <= 0)
	  {
	    return (NULL);
	  }

	mygrid = malloc(height * sizeof(int *));

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
