#include "main.h"

/**
 * print_sign - Entry point
 * Description - checking the sign of a number
 * Return: 1 is greater than zero, 0 is zero
 * @n: character to be verified
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
}
