#include "main.h"
/**
 * check - returns the natural square root of a number
 * @a: int
 * @b: int
 * Return: int
 */

int check(int a, int b)
{
	if (b * b == a)
	{
		return (b);
	}
	else if (b * b > a)
	{
		return (-1)
	}
	return (check(a, b + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: int
 * Return: int
 */

int _sqrt_recursion(int n)
{
	return (check(n, 1));
}
