#include "main.h"
#include <stdlib.h>
/**
 * free_grid - frees a 20 grid
 * @grid: pointer
 * @height: height of a grid
 * Return: void
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
