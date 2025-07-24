#include <stdlib.h>
#include "main.h"

/**
 * free_grid - frees a 2 dimensional grid
 * Description : frees a 2 dimensional grid previously created
 * by your alloc_grid function.
 * @grid: pointer to the grid
 * @height: height of the array
 * Return:	/
 */

void free_grid(int **grid, int height)
{
	/* declaration and initialization */
	int i;




	/* Loop over each row to free memory for each lines */
	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}

	/* free the main grid pointer after all rows are freed */
	free(grid);


}
