#include "main.h"
/**
 * rev_string - function
 * @s: pointer of parameter
 * Return: 0
 */

void rev_string(char *s)
{
	int a, b;
	char temp;

	for (a = 0; *s != '\0'; a++)
	{
		temp[a] = *s;
		s++;
	}
	s--;
	for (b = 0; b != a; b++)
	{
		*s = temp[b];
		s--;
	}
	s++;
}
