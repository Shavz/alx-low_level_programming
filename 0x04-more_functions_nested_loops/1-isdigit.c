#include "main.h"
/**
 * _isdigit - checks for a digit (0-9)
 * Return: 1 if c is a digit
 * if c is not a digit 0
 */

int _isdigit(int c)
{
	if (c >= 48) && (c <= 57)
	{
		return (1);
	}
	return (0);
}
