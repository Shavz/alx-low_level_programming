#include "main.h"
/**
 * malloc_checked - allocate a space
 * @b: unsigned int
 * Return: void
 */

void *malloc_checked(unsigned int b)
{
	void *x;

	x = malloc(b);
	if (x == NULL)
	{
		exit(98);
	}
	return (x);
}
