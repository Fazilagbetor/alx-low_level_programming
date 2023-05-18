#include "main.h"

/**
 * array_range - creates an array of integers
 * @min: minimum
 * @max: maximum
 * Return: array
 */

int *array_range(int min, int max)
{
	int *ary, i = 0, t = min;

	if (min > max)
		return (0);
	ary = malloc((max - min + 1) * sizeof(int));

	if (!ary)
		return (0);
	while (i <= max - min)
		ary[i++] = t++;
	return (ary);
}
