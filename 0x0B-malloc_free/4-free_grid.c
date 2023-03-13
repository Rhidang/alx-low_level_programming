#include <stdlib.h>
#include "main.h"
#include <stdio.h>
/**
 * free_grid - Function to use
 * @grid: grid of the array
 * @height: Height of the array
 * Description: Function that frees a 2D array
 * Return: Zero
 */
void free_grid(int **grid, int height)
{
	int a;

	if (grid == NULL)
		free(grid);
	for (a = 0; a < height; a++)
		free(grid[a]);

	free(grid);
}
