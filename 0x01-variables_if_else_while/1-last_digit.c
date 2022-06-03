#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - entry point
 * test conditions
 * Return: 0
 */
int main(void)
{
	int n, lastdigit;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastdigit = n % 10;

	if (lastdigit > 5)
	{
		printf("and is greater than 5");
	}

	if (lastdigit == 0)
	{
		printf("and is 0")
	}

	if (lastdigit<6,lastdigit!=0)
	{
		printf("and is less than 6 and not 0"
	}

	\n;

	return (0)
}

