#include "main.h"
/**
 * _strncat - concatenates two strings
 * @dest:char dest
 * @src: char src
 * @n:length int
 * Return: 0
 */

char *_strncat(char *dest, char *src, int n)
{
	int a, b;

	for (a = 0; *dest != 0; a++)
	{
		dest++;
	}
	for (b = 0; b < n && src[b] != 0; b++)
	{
		*dest = src[b];
		dest++;
	}
	*dest = '\0';
	dest -= (a + b);
	return (dest);
}
