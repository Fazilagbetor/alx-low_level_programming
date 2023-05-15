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
	int **fff;
	int x, y;

	if (width <= 0 || height <= 0)
		return (NULL);

	fff = malloc(sizeof(int *) * height);

	if (fff == NULL)
		return (NULL);

	for (x = 0; x < height; x++)
	{
		fff[x] = malloc(sizeof(int) * width);

		if (fff[x] == NULL)
		{
			for (; x >= 0; x--)
				free(fff[x]);

			free(fff);
			return (NULL);
		}
	}

	for (x = 0; x < height; x++)
	{
		for (y = 0; y < width; y++)
			fff[x][y] = 0;
	}

	return (fff);
}
