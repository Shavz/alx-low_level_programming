#include "main.h"
/**
 * _pow_recursion - get the value of x raised to power of y
 * @x: int base
 * @y: int power
 * Return: int
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y != 0)
	{
		return (x * _pow_recursion(x, y - 1));
	}
	else
	{
		return (1);
	}
}
