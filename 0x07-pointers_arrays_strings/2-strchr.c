#include "main.h"
/**
 * _strchr - locates a character in a string
 * @s: char
 * @c: char
 * Return: char
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != c && s[i] != '\0'; i++)
	;
	if (s[i] != c)
	{
		return (0);
	}
	else
	{
		s = s + i;
	}
	return (s);
}
