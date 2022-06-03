#include <stdio.h>
/**
 * main - entry point
 * print all possible combinations of two digits
 * Return: 0
 */

int main(void)
{
	int x, y;

		for (x = 48; x < 58; x++)
		{
			for (y = x; y < 58; y++)
			{
				if (x == y)
				{
					continue;
				}
				
				putchar(x);
				putchar(y);
			
				if (x == 56 && y == 57)
				{
					break;
				}
				else
				{
					putchar(44);
					putchar(32);
				}
			}
		}
		putchar('\n');
		return (0);
}
