#include "main.h"
/**
 * set_bit - set value to 1 with given index
 * @n: pointer of an unsigned long int
 * @index: index of the bit
 * Return: 1 if success -1 if error
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
	{
		return (-1);
	}
	if (!(*n & (1 << index)))
	{
		*n += 1 << index;
	}
	return (1);
}
