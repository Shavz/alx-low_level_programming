#include "main.h"
#include <stdio.h>

/**
 * _atoi - function
 * @s: pointer of parameter
 * Return: 0
 */

int _atoi(char *s)
{
int neg = 1;
int a = 0;
unsigned int num = 0;
for (a = 0; s[a] != '\0'; a++)
{
if (s[a] == '-')
{
neg *= -1;
}
else if (s[a] >= 0 + '0' && s[a] < 10 + '0')
{
num = num * 10 + (s[a] - '0');
}
else if (s[a - 1] >= 0 + '0' && s[a - 1] < 10 + '0')
{
break;
}
}
return (num *neg);
}
