#include "main.h"
/**
 * _strlen_recursion - returns the length of a string
 * @s: string
 * Return: int
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + _strlen_recursion(s + 1));
	}
}

/**
 * check - compares each character of the string
 * @s: string
 * @n1: int
 * @n2: int
 * Return: int
 */

int check(char *s, int n1, int n2)
{
	if (*(s + n1) == *(s + n2))
	{
		if (n1 == n2 || n1 == n2 + 1)
		{
			return (1);
		}
		return (0 + check(s, n1 + 1, n2 - 1));
	}
	return (0);
}

/**
 * is_palindrome - states if a string is a palindrome
 * @s: string
 * Return: int
 */

int is_palindrome(char *s)
{
	if (*s == '\0')
	{
		return (1);
	}
	return (check(s, 0, _strlen_recursion(s) - 1));
}
