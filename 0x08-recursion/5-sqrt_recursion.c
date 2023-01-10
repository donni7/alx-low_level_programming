#include "main.h"
/**
 * helperFunction - checks if sqrt number exist
 * @num: number
 * @pSqrt: possible sqrt of number
 * Return: sqrt of number
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
 * _sqrt_recursion - returns the square root of a number
 * @n: number
 * Return: square root of number
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else
		return (helperFunction(n, 0));
}
