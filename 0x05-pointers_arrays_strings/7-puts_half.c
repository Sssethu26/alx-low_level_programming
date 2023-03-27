#include "main.h"

/**
 * putd_half - prints half of a string
 * @str: The string to print
 * Return: void
 */

void puts_half(char *str)
{
	int b = 0;
	int d;

	while (str[b] != '\0')
	{
		b++;
	}
	if (b % 2 == 1)
	{
		d = (b - 1) / 2;
		d += 1;
	}
	else
	{
		d = b / 2;
	}

	for (; d < b; d++)
	{
		_putchar(str[d]);
	}
	_putchar('\n');
}

