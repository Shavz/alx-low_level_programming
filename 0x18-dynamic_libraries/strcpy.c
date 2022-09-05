#include "main.h"
/**
 * _strcpy - function
 * @dest: pointer of parameter
 * @src: pointer of parameter
 * Return: return dest value
 */

char *_strcpy(char *dest, char *src)
{
int a = 0;
int len = 0;
while (dest[a] != '\0')
{
dest[a++] = '\0';
}
a = 0;
while (src[len] != '\0')
{
len++;
}
for (a = 0; a < len; a++)
{
dest[a] = src[a];
}
dest[len] = '\0';
return (dest);
}
