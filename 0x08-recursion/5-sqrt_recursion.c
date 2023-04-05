#include "main.h"
/**
 * helperFunction - checks if sqrt of number exists
 * @num: number.
 * @pSqrt: possible sqrt of number
 * Return: the natural square root
 */
int helperFunction(int num, int pSqrt)
{
	if ((pSqrt * pSqrt) == num)
	{
		return (pSqrt);
	}
	else
	{
		if ((pSqrt * pSqrt) > num)
			return (-1);
		else
			return (helperFunction(num, pSqrt + 1));
	}
}
/**
 * _sqrt_recursion -> sqrt usint recursion
 * @n: parameter to be sqrt
 *
 * Return: square root of number
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else
		return (helperFunction(n, 0));
}

