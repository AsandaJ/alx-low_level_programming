#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - Allocate memory for a 2D grid and initialize it with zeros.
 * @width: The width of the grid
 * @height: The height of the grid
 * Return: Result
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int s, t;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = malloc(sizeof(int *) * height);

	if (grid == NULL)
		return (NULL);

	for (s = 0; s < height; s++)
	{
		grid[s] = malloc(sizeof(int) * width);

		if (grid[s] == NULL)
		{
			for (; s >= 0; s--)
				free(grid[s]);

			free(grid);
			return (NULL);
		}
	}

	for (s = 0; s < height; s++)
	{
		for (t = 0; t < width; t++)
			grid[s][t] = 0;
	}

	return (grid);
}
