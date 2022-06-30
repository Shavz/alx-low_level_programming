#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * get_len - gets the length of a string
 * @str: sting
 * Return: string length
 */

int get_len(char *str)
{
	int len = 0;

	while (*str++)
	{
		len++;
	}
	return (len);
}

/**
 * new_array - creates an array of chars
 * @size: size of the array to be initialized
 * Return: pointer to array
 */

char *new_array(int size)
{
	char *array;
	int index;

	array = malloc(sizeof(char) * size);
	if (array == NULL)
		exit(98);
	for (index = 0; index < (size - 1); index++)
		array[index] = 'x';
	array[index] = '\0';
	return (array);
}

/**
 * non_zero - checks string for non zero number
 * @str: string of numbers
 * Return: pointer
 */

char *non_zero(char *str)
{
	while (*str && *str == '0')
	{
		str++;
	}
	return (str);
}

/**
 * con_digit - converts digit to int
 * @c: char to convert
 * Return: int
 */

int con_digit(char c)
{
	int digit = c - '0';

	if (digit < 0 || digit > 9)
	{
		printf("Error\n");
		exit(98);
	}
	return (digit);
}

/**
 * get_prod - multiplies a string of numbers by a single digit
 * @prod: store result
 * @mul: The string of numbers
 * @digit: The single digit
 * @zeroes: The necessary number of leading zeroes
 */

void get_prod(char *prod, char *mul, int digit, int zeroes)
{
	int mul_len, num, tens = 0;

	mul_len = get_len(mul) - 1;
	mul += mul_len;
	while (*prod)
	{
		*prod = 'x';
		prod++;
	}
	prod--;
	while (zeroes--)
	{
		*prod = '0';
		prod--;
	}
	for (; mul_len >= 0; mul_len--, mul--, prod--)
	{
		if (*mul < '0' || *mul > '9')
		{
			printf("Error\n");
			exit(98);
		}
		num = (*mul - '0') * digit;
		num += tens;
		*prod = (num % 10) + '0';
		tens = num / 10;
	}
	if (tens)
		*prod = (tens % 10) + '0';
}

/**
 * add_num - adds the numbers stored in two strings
 * @final_prod: final product
 * @nxt_prod: next product to be added
 * @nxt_len: length of nxt_prod
 */

void add_num(char *final_prod, char *nxt_prod, int nxt_len)
{
	int num, tens = 0;

	while (*(final_prod + 1))
		final_prod++;
	while (*(nxt_prod + 1))
		nxt_prod++;
	for (; *final_prod != 'x'; final_prod--)
	{
		num = (*final_prod - '0') + (*nxt_prod - '0');
		num += tens;
		*final_prod = (num % 10) + '0';
		tens = num / 10;
		nxt_prod--;
		nxt_len--;
	}
	for (; nxt_len >= 0 && *nxt_prod != 'x'; nxt_len--)
	{
		num = (*nxt_prod - '0');
		num += tens;
		*final_prod = (num % 10) + '0';
		tens = num / 10;
		final_prod--;
		nxt_prod--;
	}
	if (tens)
		*final_prod = (tens % 10) + '0';
}

/**
 * main - Multiplies two positive numbers
 * @argv: The number of arguments passed to the program
 * @argc: An array of pointers to the arguments
 * Return: 0
 */

int main(int argc, char *argv[])
{
	char *final_prod, *nxt_prod;
	int size, index, digit, zeroes = 0;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}
	if (*(argv[1]) == '0')
		argv[1] = non_zero(argv[1]);
	if (*(argv[2]) == '0')
		argv[2] = non_zero(argv[2]);
	if (*(argv[1]) == '\0' || *(argv[2]) == '\0')
	{
		printf("0\n");
		return (0);
	}
	size = get_len(argv[1]) + get_len(argv[2]);
	final_prod = new_array(size + 1);
	nxt_prod = new_array(size + 1);
	for (index = get_len(argv[2]) - 1; index >= 0; index--)
	{
		digit = con_digit(*(argv[2] + index));
		get_prod(nxt_prod, argv[1], digit, zeroes++);
		add_num(final_prod, nxt_prod, size - 1);
	}
	for (index = 0; final_prod[index]; index++)
	{
		if (final_prod[index] != 'x')
			putchar(final_prod[index]);
	}
	putchar('\n');
	free(nxt_prod);
	free(final_prod);
	return (0);
}
