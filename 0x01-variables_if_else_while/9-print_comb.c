#include <stdio.h>
/**
 * main - entry point
 * print all possible combinations of single digit numbers
 * Return: 0
 */

int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
	{
		putchar((n % 10) + '0');
		putchar(", ");
	}
	putchar('\n');
	return (0);
}
