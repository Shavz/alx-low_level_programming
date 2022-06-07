#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - Prints all natural numbers from input to 98
 * @n: The number to begin counting from
 */

void print_to_98(int n)
{
	if (n < 98)
	{
		for (n = n; n < 98; n++)
		{
			printf("%d, ", n);
		}
	}
	else
	{
		for (n = n; n > 98; n--)
		{
			printf("%d, ", n);
		}
	}
}
