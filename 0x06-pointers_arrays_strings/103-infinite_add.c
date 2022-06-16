#include "main.h"
/**
 * infinite_add - adds two numbers
 * @n1: char
 * @n2: char
 * @r: char
 * @size_r :integer
 * Return: 0
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int a, b, c, x, y, z;

	for (a = 0; n1[a]; a++)
	;
	for (b = 0; n2[b]; b++)
	;
		if (a > size_r || b > size_r)
		{
			return (0);
		}
	y = 0;
	for (a -= 1, b -= 1, c = 0; c < size_r - 1; a--, b--, c++)
	{
		z = y;
		if (a >= 0)
		{
			n += n1[a] - '0';
		}
		if (b >= 0)
		{
			n += n2[b] - '0';
		}
		if (a < 0 && b < 0 && n == 0)
		{
			break;
		}
		y = z / 10;
		r[c] = n % 10 + '0';
	}
	r[c] = '\0';
	if (a >= 0 || b >= 0 || y)
	{
		return (0);
	}
	for (c -= 1, x = 0; x < c; c--, x++)
	{
		y = r[c];
		r[c] = r[x];
		r[x] = y;
	}
	return (r);
}
