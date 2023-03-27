#include "main.h"

/**
 * puts2 -  prints every other character of a string
 * @str: String to be treated
 * Return: void
 */
void puts2(char *str)
{
	int b;
	int d = 0;

	while (str[d] != '\0')
	{
		d++;
	}

	for (b = 0; b < d; b += 2)
	{
		_putchar(str[b]);
	}
	_putchar('\n');
}
