#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - Function that create an array of char
 * @size: size of array
 * @c: char to fill in the array
 * Return: 0
 */
char *create_array(unsigned int size, char c)
{
	unsigned int j;
	char *s;

	if (size == 0)
		return (NULL);
	s = malloc(size * sizeof(char));

	if (s == NULL)
		return (NULL);
	for (j = 0; j < size; j++)
	{
		s[j] = c;
	}
	return (s);
}
