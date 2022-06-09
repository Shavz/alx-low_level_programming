#include "main.h"
/**
 * print_number - print integer
 * @n: integer
 * Return: 0
 */

void print_number(int n)
{
	int a;

	a = n;

	if (n < 0)
	{
		_putchar(45);
		a = -n;
	}
	if (x / 10)
	{
		print_number(x / 10);
		_putchar((x % 10) + '0');
	}
}
