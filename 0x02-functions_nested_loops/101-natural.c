#include <stdio.h>
/**
 * main - entry point
 * test for multiples of 3 and 5
 * Return: 0
 */

int main(void)
{
	int a, b, c;

	a = 1024;
	c = 0;
	for (b = 0; b < a; b++)
	{
		if ((b % 3 == 0) || (b % 5 == 0))
		{
			c = (c + b);
		}
	}
	printf("%d\n", c);
	return (0);
}
