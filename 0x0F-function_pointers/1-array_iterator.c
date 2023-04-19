#include "function_pointers.h"
/**
 * array_iterator - function given as a parameter on each element of an array
 * @array: to be
 * @size: size of array
 * @action: pointer to the function
 * Return: 0
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int a = 0;

	if (array != NULL && action != NULL && size > 0)
	{
		while (a < size)
		{
			action(array[a]);
			a++;
		}
	}
}
