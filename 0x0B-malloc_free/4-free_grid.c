#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees the memory allocate for the grind
 * @grid: grid to free
 * @height: height of the grid
 *
 * Return: free grid
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}

	free(grid);
}
