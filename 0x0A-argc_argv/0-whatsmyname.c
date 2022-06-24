#include <stdio.h>
/**
 * main - display name of program
 * @argc: length of the arguments
 * @argv: arguments
 * Return: 0
 */

int main(int argc, char **argv)
{
	if (argc == 1)
	{
		printf("%s\n", *argv);
	}
	return (0);
}
