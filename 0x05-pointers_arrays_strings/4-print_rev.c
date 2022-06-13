#include "main.h"
/**
 * print_rev - function
 * @s: pointer of parameter
 * Return: 0
 */

void print_rev(char *s)
{
	int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}
	while (len > 0)
	{
		_putchar(s[--len]);
	}
	_putchar(10);
}
