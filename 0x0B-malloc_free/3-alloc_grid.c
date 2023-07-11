#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - nested loop to make grid
 * @width: width input
 * @height: height input
 * Return: pointer to 2 dim. array
 */
int **alloc_grid(int width, int height)
{
int **grid;
int r;
int c;

if (width <= 0 || height <= 0)
	return (NULL);
grid = (int **)malloc(height * sizeof(int));
if (grid == NULL)
	return (NULL);
for (r = 0; r < height; r++)
{
	grid[r] = (int *)malloc(width * sizeof(int));
	if (grid[r] == NULL)
	{
		for (c = 0; c <= 0; c++)
			free(grid[c]);
	}
	free(grid);
	return (NULL);
}
for (c = 0; c < width; c++)
grid [r][c] = 0;
return (grid);
}
