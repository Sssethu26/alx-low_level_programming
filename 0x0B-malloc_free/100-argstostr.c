#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr - Function that concatenates all the arguments of your program.
 * @ac: The argument count
 * @av: The argument vector
 * Return: 0
 */

char *argstostr(int ac, char **av)
{
	int ch = 0, A = 0, B = 0, C = 0;
	char *s;

	if (ac == 0 || av == NULL)
		return (NULL);

	while (ac > A)
	{
		while (av[A][B])
		{
			ch++;
			B++;
		}

		B = 0;
		A++;
	}

	s = malloc((sizeof(char) * ch) + ac + 1);

	A = 0;
	while (av[A])
	{
		while (av[A][B])
		{
			s[C] = av[A][B];
			C++;
			B++;
		}
		s[C] = '\n';

		B = 0;
		C++;
		A++;
	}
	C++;
	s[C] = '\0';
	return (s);
}

