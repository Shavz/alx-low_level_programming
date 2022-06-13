#include "main.h"
/**
 * puts_half - function
 * @str: pointer of parameter
 */

void puts_half(char *str)
{
	int a;

	for (a = 0; *str != '\0'; a++)
	{
		str++;
	}
	a = a / 2;
	for (a = a; a != 0; a--)
	{
		_putchar(*(str - a));
	}
	_putchar('\n');
}
