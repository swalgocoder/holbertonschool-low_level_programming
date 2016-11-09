#include <stdlib.h>
/**
 * alloc_grid - allocate mem for 2D array
 * @width: Width of grid, columns
 * @height: Height of grid, rows
 * Return: Pointer to array, null if fails
 */
int **alloc_grid(int width, int height)
{
	int **mygrid;
	int count;
	int count2;

	if (width < 0 || height < 0)
		return (NULL);
	mygrid = malloc(height * sizeof(int *));
	if (mygrid == NULL)
		return (NULL);
	count = 0;
	
	while (count < height)
	{
		mygrid[count] = malloc(width * sizeof(int *));
		if (mygrid[count] == NULL)
		{
			count--;
			while (count >= 0)
			{
				free(mygrid[count]);
				count--;
			}
			free(mygrid);
			return (NULL);
		}
	count++;
	}
	
	count = 0;
	while (count < height)
	{
		for (count2 = 0; count2 < width; count2++)
		{
			mygrid[count][count2] = 0;
		}
	count++;
	}
	return (mygrid);
}
