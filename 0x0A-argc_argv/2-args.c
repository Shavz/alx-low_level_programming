#include <stdio.h>
/**
 * main - print the name of each argument
 * @argc: length of the arguments
 * @argv: arguments
 * Return: 0
 */

int main(int argc, char **argv)
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", *argv);
		argv++;
	}
	return (0);
}
