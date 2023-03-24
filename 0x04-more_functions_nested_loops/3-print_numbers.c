#include "main.h"

/**
 * print_numbers - Prints the numbers since 0 p to 9
 * Return: The numbers since 0 up to 9
 */
void print_numbers(void)

{
	char c;

	for (c = 0; c <= 9; c++)
	{
		putchar(c);
	}
	putchar('\n');
}
