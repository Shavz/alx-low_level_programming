#include "main.h"
/**
 * print_line - prints a line n chars long
 * @n: length of line
 * Return: 0
 */

void print_line(int n)
{
	int x;

	if (n > 0)
	{
		for (x = 1; x <= n; x++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
