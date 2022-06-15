#include "main.h"
/**
 * string_toupper - change lowercase to uppercase
 * @s:string
 * Return: 0
 */

char *string_toupper(char *s)
{
	int a = 0;

	while (*(s + a))
	{
		if ((*(s + a) >= 97) &&  (*(s + a) <= 122))
		{
			*(s + a) = *(s + a) - 32;
		}
		a++;
	}
	return (s);
}
