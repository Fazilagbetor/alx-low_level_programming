#include "main.h"

/**
 * _islower - entry point
 * Description - checking for lowercase
 * Return: 1 for lowercase character. 0 for the rest.
 * @c: The character to be checked
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
