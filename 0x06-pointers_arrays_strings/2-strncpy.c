#include "main.h"

/**
 * _strncpy -  a function that copies a string.
 * @dest: destination string pointer.
 * @src: source of string pointer.
 * @n: number of bytes to be used.
 *
 * Return: pointer to destionation string.
 */
char *_strcpy(char *dest, char *src, int n)
{
	int index = 0, src_len = 0;

	while (src[index++])
	src_len++;

	for (index = 0; src[index] && index < n; index++)
	dest[index] = src[index];

	for (index = src_len; index < n; src_len++)
	dest[index] = '\0';

	return (dest);
}
