#include "main.h"
#include <stdlib.h>
/**
  * free_grid - frees a 2 dimensional grid created by alloc_grid
  * @grid: pointer to int
  * @height: integer
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
