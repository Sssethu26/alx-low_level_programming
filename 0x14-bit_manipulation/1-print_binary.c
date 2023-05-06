#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * print_binary - function that prints the binary representation of a number
 * @n: number to print in binary
 * Return: 0
 */
void print_binary(unsigned long int n)
{
	int i, j = 0;
	unsigned long int d;

	for (i = 63; i >= 0; i--)
	{
		d = n >> i;
		if (d & 1)
		{
			_putchar('1');
			j++;
		}
		else if (j)
			_putchar('0');
	}
	if (!j)
		_putchar('0');
}
