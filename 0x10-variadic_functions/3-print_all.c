#include "variadic_functions.h"
/**
 * print_all - prints anything
 * @format: different arguments passed
 * Return: void.
 */

void print_all(const char * const format, ...)
{
	va_list list;
	unsigned int x = 0;
	char *str;

	va_start(list, format);
	while (format != NULL && format[x] != '\0')
	{
		switch (format[x])
		{
		case 'c':
			printf("%c", va_arg(list, int));
			break;
		case 'i':
			printf("%d", va_arg(list, int));
			break;
		case 'f':
			printf("%f", va_arg(list, double));
			break;
		case 's':
			str = va_arg(list, char *);
			if (str == NULL)
			{
				printf("(nil)");
				break;
			}
			printf("%s", str);
			break;
		} x++;
	}
	printf("\n"), va_end(list);
}
