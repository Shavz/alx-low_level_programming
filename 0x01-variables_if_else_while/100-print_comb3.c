#include <stdio.h>
/**
 * main - entry point
 * print all possible combinations of two digits
 * Return: 0
 */

int main(void)
{
	int n1 n2;

		for (n1 = 48; n1 < 58; n1++)
		{
			for (n2 = n1; n2 < 58; n2++)
			{
				if (n1 == n2)
				{
					continue;
				}
				
				putchar(n1);
				putchar(n2);
			
				if (n1 == 56 && n2 == 57)
				{
					break;
				}
				else
				{
					putchar(44);
					putchar(32);
				}
			}
		}
		putchar('\n');
		return (0);
}
