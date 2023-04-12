#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - function to return a grid
 * @width: width element
 * @height: height element
 * Return: NULL if width or height is 0, pointer to 2 dimensional arrays
 */

int **alloc_grid(int width, int height)
{
	int **dimarr;
	int m, n;

	if (width <= 0 || height <= 0)
		return (NULL);
	dimarr = malloc(sizeof(int *) * height);
	if (dimarr == NULL)
		return (NULL);
	for (m = 0; m < height; m++)
	{
		dimarr[m] = malloc(sizeof(int) * width);
		if (dimarr[m] == NULL)
		{
			for (; m >= 0; m--)
				free(dimarr[m]);
			free(dimarr);
			return (NULL);
		}
	}
	for (m = 0; m < height; m++)
	{
		for (n = 0; n < width; n++)
			dimarr[m][n] = 0;
	}
	return (dimarr);
}
