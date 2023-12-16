#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * alloc_grid - allocate grid
 * @width: width
 * @height: height
 * Return: returns a pointer to 2d grid.
 */
int **alloc_grid(int width, int height)
{
	int **alloc, i, j;

	alloc = malloc(sizeof(*alloc) * width);
	for (i = 0; i < height; i++)
		alloc[i] = malloc(sizeof(alloc) * width);
	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
			alloc[i][j] = 0;
	return (alloc);
}
