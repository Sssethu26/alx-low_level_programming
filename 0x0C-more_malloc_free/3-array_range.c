#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - function that creates an array of integers.
 * @max: maximum number of arry
 *
 * @min: minimum number of array
 * Return: 0
 */

int *array_range(int min, int max)
{
	int *s, b = 0;

	if (min > max)
		return (NULL);

	s = malloc((sizeof(int) * (max - min)) + sizeof(int));

	if (s == NULL)
		return (NULL);

	while (min <= max)
	{
		s[b] = min;
		b++;
		min++;
	}
	return (s);
}
