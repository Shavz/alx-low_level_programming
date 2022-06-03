#include <stdio.h>
/**
 * main - entry point
 * print alphabet
 * Return: 0
 */

int main(void)
{
	int n;

	for (n = 'a'; n <= 'z'; n++)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}
