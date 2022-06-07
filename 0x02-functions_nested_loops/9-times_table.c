#include "main.h"
/**
 * times_table - Prints the 9 times table, starting with 0
 */

void times_table(void)
{
	int x, y, result;

	for (x = 0; x <= 9; x++)
	{
		for (y = 0; y <= 9; y++)
		{
			result = (x * y);
			if ((result / 10) == 0)
			{
				if (y == 0)
				{
					_putchar ('0');
				}
				if (y != 0)
				{
					_putchar (' ');
					_putchar ((result % 10) + '0');
				}
				if (y < 9)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
			else
			{
				_putchar ((result / 10) + '0');
				_putchar ((result % 10) + '0');
				if (y < 9)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
		}
		_putchar ('\n');
	}
}
