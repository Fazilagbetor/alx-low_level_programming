#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - executes a function given as a parameter
 * on each element of an array
 * @array: the array to iterate over
 * @size: the size of the array
 * @action: the pointer to function used
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int f;

	if (array && size && action)
	{
		for (f = 0; f < size; f++)
		{
			action(array[f]);
		}
	}
}
