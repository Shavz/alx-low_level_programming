#include "main.h"
/**
 * main - entry point
 * prints _putchar followed by a new line
 * Return: 0
 */

int main(void)
{
	char x[] = "_putchar";
	int n;

	for (n = 0; n <= 8; n++)
	{
		_putchar(x[n]);
	}
	_putchar('\n');
	return (0);
}
