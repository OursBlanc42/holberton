#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers.
 * Description : returns a pointer to a 2 dimensional array of integers.
 * @width: width of the array
 * @height: height of the array
 * Return:	NULL on failure
 *			NULL if widht or height is 0 or negative
 *			else Return pointer 2 dimensional array of integers.
 */

int **alloc_grid(int width, int height)
{
	/* declaration and initialization */
	int i, j, **grid;

	/* check if width or height is 0 or negative */
	if ((width <= 0) || (height <= 0))
		return (NULL);

	/* Set up the grid by allocating memory for a 2D array */
	grid = malloc(height * sizeof(int *));

	if (grid == NULL) /* check if memory allocation succeed */
		return (NULL);

	for (i = 0; i < height; i++)
	{	/* Loop over each row to allocate memory for the columns */
		grid[i] = malloc(width * sizeof(int));
		/* check if memory allocation succeed */
		if (grid[i] == NULL)
		{	/* liberate memory previously allocated */
			while (i != 0)
			{
				i--;
				free(grid[i]);
			}
			free(grid);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
	{ /* Loop through grid and write "0" in each cells */
		for (j = 0; j < width; j++)
		{
			grid[i][j] = 0;
		}
	}

	return (grid);

}
