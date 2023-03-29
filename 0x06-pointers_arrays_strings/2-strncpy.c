#include "main.h"

/**
 * _strncpy - function that copies a string.
 * of bytes from string src into dest.
 * @dest: the buffer storing the copy
 * @src: the source string.
 * @n: the maximum number of bytes to copied from src.
 * Return: dest
 */
char *_strcpy(char *dest, char *src, int n)
{
	int index = 0;

	src_len = 0;

	while (src[index++])
		src_len++;

	for (index = 0; src[index] && index < n; index++)
		dest[index] = src[index];

	for (index = src_len; index < n; index++)
		dest[index] = '\0';

	return (dest);
}
