#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - random password generator for 101-crackme
 * Return: 0
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand();
	printf("%i\n", n);
	return (0);
}
