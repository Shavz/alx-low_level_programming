#include <stdio.h>
/**
 * main - entry point 
 * print first 50 fibonacci numbers
 * Return: 0
 */

int main(void)
{
	int a, b, c, n;

	a = 0;
	b = 1;
	for (n = 0; n < 50; n++)
	{
		c = a + b;
		a = b;
		b = c;
		printf("%d", c);
		if (n == 49)
		{
			putchar('\n');
		}
		else
		{
			printf(", ");
		}
	}
	return (0);
}
