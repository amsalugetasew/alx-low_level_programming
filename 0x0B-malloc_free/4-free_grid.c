#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - Free allocating memory
 * @grid: firts input
 * @height: second input
 * Return: Always (Success)
 */
void free_grid(int **grid, int height)
{
	int i;

	for(i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}

