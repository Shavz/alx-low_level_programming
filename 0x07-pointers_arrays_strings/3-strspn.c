#include "main.h"
/**
 * _strspn - get the lenght of prefix substring
 * @s: string
 * @accept: string
 * Return: unsigned int
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int a;
	int i;

	a = 0;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				a++;
				break;
			}
			else if (accept[i + 1] == '\0')
			{
				return (a);
			}
		}
		s++;
	}
	return (a);
}
