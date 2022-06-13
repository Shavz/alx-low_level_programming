#include"main.h"
/**
 * puts2 - function
 * @str: pointer of parameter
 */

void puts2(char *str)
{
	int a = 0;

	while (str[a] != '\0')
	{
		if (a % 2 == 0)
		{
			_putchar(str[a]);
		}
		a++;
	}
	_putchar(10);
}
