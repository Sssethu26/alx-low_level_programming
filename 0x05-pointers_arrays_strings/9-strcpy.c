#include "main.h"
/**
 * _strcpy - function that copies the string pointed
 * @dest: Destionation value
 * @src: Source value
 * Reurn: The pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
	dest[i] = src[i];
	}
	dest[i++] = '\0';
	return (dest);
}
