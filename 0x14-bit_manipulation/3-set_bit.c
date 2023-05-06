#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * set_bit - function that sets the value of a bit to 1 at a given index
 * @n: pointer to the number to change
 * @index: index of the bit to set to 1
 * Return: 1 for success, -1 for failure
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n = ((1UL << index) | *n);
	return (1);
}
