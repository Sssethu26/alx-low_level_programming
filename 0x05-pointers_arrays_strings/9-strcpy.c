#include "main.h"
/**
 * _strcpy - function that copies the string pointed
 * @dest: Destionation value
 * @src: Source value
 * Reurn: string
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	while (*(src + i) != '\0')
	{
		i++;
	}
	for (; j < i; i++)
	{
	dest[i] = src[i];
	}
	dest[j++] = '\0';
	return (dest);
}
