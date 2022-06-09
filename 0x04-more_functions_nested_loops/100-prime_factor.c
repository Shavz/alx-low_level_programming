#include <stdio.h>
/**
 * main - largest prime factor of 612852475143
 *
 * Return: 0
 */

int main(void)
{
	long int a, b;

	a = 612852475143;

	for (b = 2; a > b; b++)
	{
		while (a % b == 0)
		{
			a = a / b;
		}
	}
	printf("%ld", b);
	putchar('\n');
	return (0);
}
