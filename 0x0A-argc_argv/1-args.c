#include <stdio.h>
/**
 * main - display number of arguments
 * @argc: length of the arguments
 * @argv: arguments
 * Return: 0
 */

int main(int argc, char **argv)
{
	if (**argv != '\0')
	{
		printf("%d\n", argc - 1);
	}
	return (0);
}
