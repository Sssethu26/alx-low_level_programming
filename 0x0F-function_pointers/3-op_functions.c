#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - program that peforms adding in operations
 * @a: first to be added
 * @b: second to be added
 * Return: always 0 (success)
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - program that performs subtrationg in operations
 * @a: to be subtracted
 * @b: subtracted from
 * Return: always 0
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - program that performs multiplication in operations
 * @a: to be multiply
 * @b: to be multiply
 * Return: 0
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - program that performs division in operations
 * @a: to be divided
 * @b: to be divided
 * Return: 0
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}
/**
 * op_mod: program that performs modulo in operations
 * @a: to be mod
 * @b: to be mod
 * Return: 0
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
