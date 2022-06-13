#include "main.h"
/**
 * swap_int - function
 * @a: pointer of parameter
 * @b: pointer of parameter
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
