#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - function that allocates memory for an array
 * @nmemb: number of members
 *@size: size
 * Return: 0
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	int a = 0, d = 0;
	char *s;

	if (nmemb == 0 || size == 0)
		return (NULL);

	d = nmemb * size;
	s = malloc(d);

	if (s == NULL)
		return (NULL);

	while (a < d)
	{
		s[a] = 0;
		a++;
	}
	return (s);
}
