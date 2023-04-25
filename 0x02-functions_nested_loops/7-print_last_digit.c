#include "main.h"

/**
 * print_last_digit - Entry point
 *Desription - 'printing last digits of a number'
 * @x: The value of the last digit
 * Return: value of the last digit
 */

int print_last_digit(int x)
{
	int lastdigit = x % 10;

	if (lastdigit < 0)
	{
		lastdigit = lastdigit * -1;
	}
	_putchar(lastdigit + 48);
	return (lastdigit);
}
