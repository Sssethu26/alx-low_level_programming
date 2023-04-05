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
	 * _sqrt_recursion - Returns the natural square root of a number.
	 * @n: number to find sqrt of.
	 *
	 * Return: square root of n or -1 if n does not have a natural sqrt.
	 *
	 */
	int _sqrt_recursion(int n)
	{
		if (n < 0)
			return (-1);
		else
			return (helperFunction(n, 0));
	}

