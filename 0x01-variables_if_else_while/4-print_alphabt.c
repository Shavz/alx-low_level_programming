#include <stdio.h>
/**
 * main - entry point
 * print lowercase alphabets except q and e
 * Return: 0
 */

int main(void)
{
	int n;

	for (n = 'a'; n <= 'z'; n++)
	{
		if (n != 'q' && n != 'e')
		{
			putchar(n);
		}
		
	}
	putchar('\n');
	return (0);
}
