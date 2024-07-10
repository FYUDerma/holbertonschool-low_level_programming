#include "main.h"

/**
 * alloc_grid - fuction to make a 2d array of int
 * @width: width of the array
 * @height: height of the array
 *
 * Return: Return the 2D Array
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int i, j;
	int *row;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = malloc(sizeof(int *) * height);

	if (grid == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		row = malloc(sizeof(int) * width);
		if (row == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(grid[j]);
			}
			free(grid);
			return (NULL);
		}
		grid[i] = row;
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			grid[i][j] = 0;
		}
	}
	return (grid);
}
