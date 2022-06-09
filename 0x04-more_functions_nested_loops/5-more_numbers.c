#include "main.h"
/**
 * more_numbers - prints numbers 0-14
 * Return: 0
 */

void more_numbers(void)
{
	int a, b;

	for (a = 0; a < 10; a++)
	{
		for (b = 0; b < 15; b++)
		{
			if (b / 10 != 0)
			{
				_putchar('0' + b / 10);
			}
			_putchar('0' + b % 10);
		}
		_putchar('\n');
	}
}
