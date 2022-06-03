#include <stdio.h>
/**
 * main - entry point
 * print all possible combinations of two two-digit numbers
 * Return:0
 */

int main(void)
{
	int x, y;
	for (x = 0; x <= 99; x++)
	{
		for (y = x; y <= 99; y++)
		{
			if (y != x)
			{
				putchar(x / 10 + 48);
				putchar(x % 10 + 48);
				putchar(32);
				putchar(y / 10 + 48);
				putchar(y % 10 + 48);
				if (x * 100 + y != 9899)
				{
					putchar(44);
					putchar(32);
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
