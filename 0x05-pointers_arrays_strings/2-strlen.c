#include "main.h"
/**
 * _strlen - function
 * @s: pointer of parameter
 * Return: value of n
 */

int _strlen(char *s)
{
	int len;

	for (len = 0; *s != '\0'; len++)
	{
		s++;
	}
	return (len);
}
