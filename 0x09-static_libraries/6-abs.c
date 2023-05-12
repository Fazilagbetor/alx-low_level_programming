#include "main.h"

/**
 * _abs - Entry point
 * Description - computing for the absolute value of an integer
 * Return: the absolute value
 * @i: the integer to be computed
 */
int _abs(int i)
{
	if (i >= 0)
	{
		return (i);
	}
	else
	{
		return (i * -1);
	}
}
