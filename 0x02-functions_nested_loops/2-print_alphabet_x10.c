#include "main.h"
/** 
 * print_alphabet_x10 - function that prints the alphabet 10 times followed by a new line
 * Return: 0
 */

void print_alphabet_x10(void)
{
	int n, count;

	count = 0;

	while (count < 10)
	{
		for (n = 'a'; n <= 'z'; n++)
		{
			_putchar(n);
		}
		count++;
		_putchar('\n');
	}
}
