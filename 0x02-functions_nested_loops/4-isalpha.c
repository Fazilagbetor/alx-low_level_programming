#include "main.h"

/**
 * _isalpha - Entry point
 * Description - checking for alphabetic character
 * @c: Character to be checked
 * Return: 1 for letters, 0 otherwise (success)
 */

int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
