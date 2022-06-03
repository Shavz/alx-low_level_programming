#include <stdio.h>
/**
 * main - entry point
 * print numbers of base 16 in lowercase
 * Return: 0
 */

int main(void)
{
	int n;

	for (n = 0; n < 16; n++)
	{
		printf("%x", n);
	}
	putchar('\n');
	return (0);
}
