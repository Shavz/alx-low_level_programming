#include <stdio.h>
/**
 * main - entry point
 * print alphabet in lowercase then upppercase
 * Return: 0
 */

int main(void)
{
	int n;
	for (n= ‘a’; n<= ‘z’; n++)
	{
		putchar(n);
	}

	for (n= ‘A’; n<= ‘Z’; n++)
	{
		putchar(n);
		putchar('\n');
	}

	return (0);
}
