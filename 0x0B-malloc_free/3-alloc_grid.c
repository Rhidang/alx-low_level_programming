#include <stdlib.h>
#include "main.h"
/**
 * alloc_grid - Function to use
 * @width: width of the grid
 * @height: height of the grid
 * Description: Function to return pointer to 2D array of integers
 * Return: NULL on failure
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int a, b;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = malloc(height * sizeof(int *));

	if (grid == NULL)
		return (NULL);

	for (a = 0; a < height; a++)
	{
		grid[a] = malloc(width * sizeof(int));
		if (grid[a] == NULL)
		{
			for (a = 0; a < height; a++)
				free(grid[a]);
			return (NULL);
		}
		for (b = 0; b < width; b++)
			grid[a][b] = 0;
	}
	return (grid);
}
