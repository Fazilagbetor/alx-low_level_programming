#include <stdio.h>

/**
 * main - Entry point
 * Description - 'printing both uppercase and lowercase letters'
 * Return: always 0 (success)
 */

int main(void)
{
	int h = 97;
	int l = 65;

	while (h <= 122)
	{
		putchar(h);
		h++;
	}
	while (l <= 90)
	{
		putchar(l);
		l++;
	}
	putchar('\n');
	return (0);
}
