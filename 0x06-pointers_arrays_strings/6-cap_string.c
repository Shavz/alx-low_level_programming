#include "main.h"
/**
 * cap_string - capitalizes everey word of a string
 * @s: string
 * Return: 0
 */

char *cap_string(char *s)
{
	int x = 0;
	int y;
	char a[] = " \t\n,;.!?\"(){}";

	while (*(s + x))
	{
		if (*(s + x) >= 'a' && *(s + x) <= 'z')
		{
			if (x == 0)
			{
				*(s + x) -= 'a' - 'A';
			}
			else
			{
				for (y = 0; y <= 12; y++)
				{
					if (a[y] == *(s + x - 1))
					{
						*(s + x) -= 'a' - 'A';
					}
				}
			}
		}
		x++;
	}
	return (s);
}
