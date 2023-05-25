#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - prints strings.
 * @separator: string to be printed between the strings.
 * @n: number of strings passed to the function.
 *
 * Return: no return.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list valist;
	unsigned int f;
	char *str;

	va_start(valist, n);

	for (f = 0; f < n; f++)
	{
		str = va_arg(valist, char *);

		if (str)
			printf("%s", str);
		else
			printf("(nil)");

		if (f < n - 1)
			if (separator)
				printf("%s", separator);
	}

	printf("\n");
	va_end(valist);
}
