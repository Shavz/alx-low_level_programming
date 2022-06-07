#include <stdio.h>
/**
 * main - entry point
 * print the first 98 fibonacci numbers
 * Return: 0
 */

int main(void)
{
	int n;
	long int a, b, c;
	long int x, y, z, carry;

	n = 0;
	a = 0;
	b = 1;
	for (n = 1; n <= 91; n++)
	{
		c = a + b;
		a = b;
		b = c;
		printf("%ld, ", c);
	}
	x = a % 1000;
	a = a / 1000;
	y = b % 1000;
	b = b / 1000;
	while (n <= 98)
	{
		carry = (x + y) / 1000;
		z = (x + y) - carry * 1000;
		c = (a + b) + carry;
		x = y;
		y = z;
		a = b;
		b = c;
		if (z >= 100)
			printf("%ld%ld", c, z);
		else
			printf("%ld0%ld", c, z);
		if (n != 98)
			printf(", ");
		n++;
	}
	putchar('\n');
	return (0);
}
