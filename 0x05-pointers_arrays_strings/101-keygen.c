#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - random password generator for 101-crackme
 * Return: 0
 */

int main(void)
{
	char x[100];
	int a, b, c;

	b = 0;
	c = 0;

	srand(time(NULL));
	while (b < 2645)
	{
		a = rand() % 122;
		if (a > 32)
		{
			x[c++] = a;
			b += a;
		}
	}
	x[c++] = (2772 - b);
	x[c] = '\0';
	printf("%s", x);
	return (0);
}
