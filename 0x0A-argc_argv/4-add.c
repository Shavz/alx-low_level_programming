#include <stdio.h>
#include <stdlib.h>
/**
 * main - adds positive arguments
 * @argc: length of arguments
 * @argv: arguments
 * Return: 0
 */

int main(int argc, char **argv)
{
	int i, j, sum = 0;

		for (i = 1; i < argc; i++)
		{
			for (j = 0; (argv[i])[j] != '\0'; j++)
			{
				if (((argv[i])[j] - '0') >= 0 && ((argv[i])[j] - '0') <= 9)
					continue;
				else
				{
					printf("Error\n");
					return (1);
				}
			}
			sum += atoi(argv[i]);
		}
	printf("%d\n", sum);
	return (0);
}
