#include "main.h"
/**
 * print_most_numbers - prints numbers except 2 and 4
 * Return: 0
 */

void print_most_numbers(void)
{
	int n;

	for (n = 0; n < 10; n++)
	{
		if (n != 2)
		{
			if (n != 4)
			{
				_putchar(n);
			}
		}
	}
	_putchar('\n');
}
