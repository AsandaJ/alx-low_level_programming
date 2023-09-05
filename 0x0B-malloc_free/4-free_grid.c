#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * free_grid - Free the memory allocated for a 2D array.
 * @grid: A pointer to the 2D array.
 * @height: The height dimension of grid
 * Description: Deallocates memory for 2D array.
 * Return: Nothing (void)
 *
 */
void free_grid(int **grid, int height)
{
	int t;

	for (t = 0; t < height; t++)
	{
		free(grid[t]);
	}
	free(grid);
}
