#include "main.h"
/**
 * times_table - Prints the 9 times table, starting with 0
 */

void times_table(void)
{
	int x, y, result;

	for (x = 0; x <= 9; x++)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');

		for (y = 1; y <= 9; y++)
		{
			result = (x * y);
			if ((result / 10) > 0)
			{
				_putchar((d / 10) + '0');
			}
			else
			{
				_putchar(' ');
			}
			if (y < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
