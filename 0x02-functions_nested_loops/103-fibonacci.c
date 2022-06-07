#include <stdio.h>
/**
 * main - entry point
 * sum even fibonacci numbers under 4 million
 * Return: 0
 */

int main(void)
{
	long int a, b, c, sum;
	int n;

	a = 0;
	b = 1;
	sum = 0;
	for (n = 0; n < 50; n++)
	{
		c = a + b;
		a = b;
		b = c;
		if (c % 2 == 0 && c < 4000000)
		{
			sum = sum + c;
		}
	}
	printf("%ld\n", sum);
	return (0);
}
