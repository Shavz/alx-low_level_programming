#include "variadic_functions.h"

void ch(va_list a);
void in(va_list a);
void fl(va_list a);
void cha(va_list a);

/**
  * print_all - prints anything
  * @format: string
  * Return: void
  */

void print_all(const char * const format, ...)
{
	va_list list;
	unsigned int i, j;
	char *separator = "";
	op_t o[] = {
		{"c", ch},
		{"i", in},
		{"f", fl},
		{"s", cha},
		{NULL, NULL}
	};

	va_start(list, format);
	i = 0;
	while (format != NULL && format[i] != '\0')
	{
		j = 0;
		while (o[j].op != NULL)
		{
			if (format[i] == o[j].op[0])
			{
				printf("%s", separator);
				o[j].f(list);
				separator = ", ";
				break;
			}
			j++;
		}
		i++;
	}
	va_end(list);
	printf("\n");
}

/**
  * ch - checks if char
  * @a: string
  * Return: void
  */

void ch(va_list a)
{
	printf("%c", va_arg(a, int));
}

/**
  * in - checks if int
  * @a: string
  * Return: void
  */

void in(va_list a)
{
	printf("%d", va_arg(a, int));
}

/**
  * fl - checks if float
  * @a: string
  * Return: void
  */

void fl(va_list a)
{
	printf("%f", va_arg(a, double));
}

/**
  * cha - checks if char
  * @a: string
  * Return: void
  */

void cha(va_list a)
{
	char *aa = va_arg(a, char *);

	if (aa == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", aa);
}
