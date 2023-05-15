#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup - Duplicate to the new memory space location
 * @str: char
 * Return: 0
 */
char *_strdup(char *str)
{
	char *fff;
	int i, r = 0;

	if (str == NULL)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
		i++;

	fff = malloc(sizeof(char) * (i + 1));

	if (fff == NULL)
		return (NULL);

	for (r = 0; str[r]; r++)
		fff[r] = str[r];

	return (fff);
}
