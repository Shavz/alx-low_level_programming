#include "main.h"
/**
 * _strncpy - copy a string
 * @dest:char
 * @src:char
 * @n:int
 * Return: 0
 */

char *_strncpy(char *dest, char *src, int n)
{
	int a = 0;

	while (a < n && *(src + a))
	{
		*(dest + a) = *(src + a);
		a++;
	}
	while (a < n)
	{
		*(dest + a) = '\0';
		a++;
	}
	return (dest);
}
