#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * free_grid - Free memory allocated for a 2D array.
 * @grid: The 2D array to free.
 * @height: The height of the array.
 *
 * Description: This function frees the memory allocated for a 2D array.
 * Return: Nothing.
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
