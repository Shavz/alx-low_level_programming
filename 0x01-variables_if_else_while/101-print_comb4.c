#include <stdio.h>
/**
 * main - entry point
 * prints all possible different combinations of three digits
 * Return: 0
 */

int main(void)
{
	int x, y, z;

	for (x = 48; x < 58; x++)
	{
		for (y = x; y < 58; y++)
		{
			for (z = y; z < 58; z++)
			{
				if (x == y || y == z || x == z)
				{
					continue;
				}
				putchar(x);
				putchar(y);
				putchar(z);
				if (x == 55 && y == 56 && z == 57)
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
	}
	putchar('\n');
	return (0);
}
