#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * flip_bits - function that returns the number of bits you
 * would need to flip to get from one number to another.
 * @n: first number
 * @m: second num
 * Return: number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, j = 0;
	unsigned long int b;
	unsigned long int exclusive = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		b = exclusive >> i;
		if (b & 1)
			j++;
	}
	return (j);
}
