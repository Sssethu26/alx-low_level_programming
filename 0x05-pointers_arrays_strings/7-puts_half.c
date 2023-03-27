#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: The string to print
 * Return: void
 */

void puts_half(char *str)
{
	int length = 0;
	int d;

	for (d = 0; str[d] != '\0'; d++)
		length++;
	if (length % 2 == 0)
	{
		for (d = length / 2; str[d] != '\0'; d++)
			_putchar(str[d]);
		_putchar('\n');
	}
	else if (length % 2 != 0)
	{
		for (d = (length - 1) / 2; str[d] != '\0'; d++)
			_putchar(str[d]);
		_putchar('\n');
	}
}

