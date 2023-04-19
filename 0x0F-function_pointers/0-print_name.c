#include "funtion_pointers.h"

/**
 * print_name - function that prints a name
 * @name: name to be printed
 * @f: pointer to function
 * Return: Always 0
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
